#pragma once
#include "CNgay.h"
#include <string>
class HocSinh
{
private:
	string HoTen;
	float DiemToan, DiemVan;
	NGAY NgaySinh;
public:
	void Nhap();
	void Xuat();
	float TinhDTB();
	HocSinh();
	~HocSinh();
};



