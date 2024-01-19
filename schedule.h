#pragma once
#include "libxl.h"
using namespace libxl;
using namespace System;

ref class schedule
{
private:
    System::String^ komnata;
    System::String^ date;
    System::String^ famil;
    System::String^ date1;
public:
    String^ GetInfo() {
        String^ tmp = "Дата заселения - " + date + "\nДата выселения - " + date1 + "\nФамилия и инициалы гостя - " + famil + "\n";
        return tmp;
    }
    schedule(int RowNumber)
    {
        LoadFromExcel("bd.xls", RowNumber);
    }
    String^ GetRoom(String^ number) {
        if (this->komnata == number) {
            return GetInfo();
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
                Sheet* sheet = book->getSheet(1);

                if (sheet->lastRow() >= 1)
                {
                    komnata = sheet->readNum(RowNumber, 0).ToString();
                    double excelDate = sheet->readNum(RowNumber, 1);
                    date = ExcelDateToString(excelDate);
                    famil = gcnew System::String(sheet->readStr(RowNumber, 2));
                    double excelDate1 = sheet->readNum(RowNumber, 3);
                    date1 = ExcelDateToString(excelDate1);
                }

            }
            book->release();
        }
    }
    System::String^ ExcelDateToString(double excelDate) {
        DateTime dateTime = DateTime(1899, 12, 30).AddDays(excelDate);

        return dateTime.ToString(L"dd.MM.yyyy");
    }
};


