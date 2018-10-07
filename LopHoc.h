#pragma once
#include "HocSinh.h"
#include <vector>
class LopHoc
{
private:
	vector <HocSinh> List;
public:
	void Nhap();
	void Xuat();
	void XuatSinhVienCoDiemCaoNhat();
	LopHoc();
	~LopHoc();
};

