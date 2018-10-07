#include "CNgay.h"

void NGAY::Nhap()
{
	int Check;
	do
	{


		cout << "\nNhap vao Ngay: ";
		cin >> ngay;

		cout << "\nNhap vao Thang: ";
		cin >> Thang;

		cout << "\nNhap vao Nam: ";
		cin >> Nam;

		int NgayMax, NamNhuan = 0;
		if (Nam < 1900 || ngay < 0)
		{
			cout << "\nNam vao khong hop le xin nhap lai:";
			Check = 1;
			continue;
		}
		if ((Nam % 400 == 0) || (Nam % 4 == 0 && Nam % 100 != 0))
		{
			NamNhuan = 1;
		}

		switch (Thang)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			NgayMax = 31;
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			NgayMax = 30;
			break;
		case 2:
			if (NamNhuan == 0)
			{
				NgayMax = 28;
			}
			else
			{
				NgayMax = 29;
			}
			break;

		default:
			cout << "\nThang Nhap vao khong hop le!";
			Check = 1;
			continue;
			break;
		}
		if (ngay > NgayMax)
		{
			cout << "\nNgay khong hop le xin nhap lai!";
			Check = 1;
		}
		else
		{
			Check = 0;
		}


	} while (Check == 1);


}

void NGAY::Xuat()
{
	cout << " " << ngay << "/" << Thang << "/" << Nam;
}


NGAY::NGAY()
{
}

NGAY::~NGAY()
{
}
