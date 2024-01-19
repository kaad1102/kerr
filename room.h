#pragma once
#include "libxl.h"
#include <iostream>
using namespace libxl;
using namespace System;

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
    String^ AddGuest(String^ number)
    {
        if (this->busy == "Нет")
        {
            Book* book = xlCreateBook();
            if (book)
            {
                if (book->load(L"bd.xls"))
                {
                    Sheet* sheet = book->getSheet(0);
                }
            }
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
