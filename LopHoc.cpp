#include "LopHoc.h"
#include <Windows.h>
#include <conio.h>
void LopHoc::Nhap()
{
	
	int LuaChon = 1;
	do {

		
		cout << "\n=============Menu===============";
		cout << "\n1. Nhap";
		cout << "\n2. Thoat";
		cout << "\n================================";
		cout << "\nNhap vao lua chon cua ban: ";
		cin >> LuaChon;

		if (LuaChon == 1)
		{
			cin.ignore();
			HocSinh x;
			cout << "\nNhap thong tin sinh vien: ";
			x.Nhap();
			List.push_back(x);
			
		}

	} while (LuaChon != 2);
}

void LopHoc::Xuat()
{
	int size = List.size();
	for (int i = 0; i < size; i++)
	{
		 List[i].Xuat();
	}
}

void LopHoc::XuatSinhVienCoDiemCaoNhat()
{
	int size = List.size();
	float Max = List[0].TinhDTB();
	for (int i = 1; i < size; i++)
	{
		
		if (List[i].TinhDTB() > Max)
		{
			Max = List[i].TinhDTB();
		}
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	cout << "\n=============Xuat thong tin cac sinh vien co diem cao nhat==================";
	for (int i = 0; i < size; i++)
	{

		if (Max == List[i].TinhDTB())
		{
			List[i].Xuat();
		}
	}
}

LopHoc::LopHoc()
{
}


LopHoc::~LopHoc()
{
}
