#pragma once

#include "SinhVien.h"
class SinhVien_CĐ : public SinhVien
{
private:
	float Diem_Totnghiep;
public:

	void Nhap();
	void Xuat();
	bool XetTotNghiep()const;
	int GetLoai();
};

