#include "HocSinh.h"



void HocSinh::Nhap()
{
	cout << "\nNhap ten hoc sinh: ";
	getline(cin, HoTen);

	cout << "\nNhap Ngay sinh:";
	NgaySinh.Nhap();

	cout << "\nNhap Diem Toan:";
	cin >> DiemToan;

	cout << "\nNhap diem van: ";
	cin >> DiemVan;

}

void HocSinh::Xuat()
{
	cout << "\nHo Ten: " << HoTen;
	cout << "\nNgay sinh: ";
	NgaySinh.Xuat();
	cout << "\nDiem Toan: " << DiemToan;
	cout << "\nDiem Van: " << DiemVan;
	cout << "\nDiem trung binh: " << TinhDTB() << endl;
}

float HocSinh::TinhDTB()
{
	return (DiemToan + DiemVan) / 2;

}



HocSinh::HocSinh()
{
}


HocSinh::~HocSinh()
{
}
