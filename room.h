#pragma once
#include "libxl.h"
#include <iostream>
#include <stdio.h>
using namespace libxl;
using namespace System;
using namespace System;
using namespace System::Runtime::InteropServices;


ref class room
{
private:
    System::String^ floor;
    System::String^ number;
    System::String^ busy;
    System::String^ fam;
    System::String^ type;
    System::String^ price;

public:
    String^ GetStr() {
        String^ tmp = "Этаж - " + floor + "\nНомер комнаты - " + number + "\nЗанят/нет - " + busy 
            + "\nФамилия и инициалы гостя - " + fam + "\nТип номера - " + type + "\nЦена - " + price;
        return tmp;
    }
    room(int RowNumber)
    {
        LoadFromExcel("bd.xls", RowNumber);
    }
    String^ Search(String^ number) {
        if (this->number == number) {
            return GetStr();
        }
    }
    void Color(System::Windows::Forms::Button^ tmp, String^ number) {
        if (this->number == number) {
            if (this->busy == "нет") {
                tmp->BackColor = System::Drawing::Color::Blue;
            }
            else {
                tmp->BackColor = System::Drawing::Color::Red;
            }
        }
    }
    String^ AddGuest(System::String^ teg, int RowNumber, System::Windows::Forms::Form^)
    {
        if (this->busy == "нет")
        {
            Book* book = xlCreateBook();
            book->setKey(L"ERICK RUBEN GONZALEZ BELTRAN", L"windows-202c280c0ac0ec046db46a60a9obmek6");
            if (book)
            {
                if (book->load(L"bd.xls"))
                {
                    Sheet* sheet = book->getSheet(0);
                    if (sheet->lastRow() >= 1)
                    {
                        String^ guestSurname = teg;
                        if (guestSurname != "") {
                            sheet->writeStr(RowNumber, 2, (const wchar_t*)Marshal::StringToHGlobalUni("да").ToPointer());
                            sheet->writeStr(RowNumber, 3, (const wchar_t*)Marshal::StringToHGlobalUni(guestSurname).ToPointer());
                            System::Windows::Forms::MessageBox::Show("Номер забронирован!", "Сообщение", System::Windows::Forms::MessageBoxButtons::OK);
                        }
                        else {
                            System::Windows::Forms::MessageBox::Show("СВОСВОСВОСВОСВОСВО", "Ошибка!", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Warning);
                        } 

                        book->save(L"bd.xls");
                        book->release();

                        return "Гость успешно добавлен!";
                    }
                }
            }
    
        }
        else {
            System::Windows::Forms::MessageBox::Show("Номер уже занят!", "Ошибка!", System::Windows::Forms::MessageBoxButtons::OK);
        }
    }

private:
    void LoadFromExcel(System::String^ excelFilePath, int RowNumber)
    {
        Book* book = xlCreateBook();

        if (book)
        {
            if (book->load(L"bd.xls"))
            {
                Sheet* sheet = book->getSheet(0);

                if (sheet->lastRow() >= 1)
                {
                    floor = sheet->readNum(RowNumber, 0).ToString();
                    number = sheet->readNum(RowNumber, 1).ToString();
                    busy = gcnew System::String(sheet->readStr(RowNumber, 2));
                    fam = gcnew System::String(sheet->readStr(RowNumber, 3));
                    type = gcnew System::String(sheet->readStr(RowNumber, 4));
                    price = sheet->readNum(RowNumber, 5).ToString();
                }

            }
            book->release();
        }
    }
};
