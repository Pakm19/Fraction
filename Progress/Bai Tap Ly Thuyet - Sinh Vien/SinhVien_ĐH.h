#pragma once
#include <iostream>
#include <string>
#include "SinhVien.h"

using namespace std;
class SinhVien_ĐH : public SinhVien
{
private:
	string Ten_Luanvan;
	float Diem_Luanvan;
public:
	
	void Nhap();
	void Xuat();
	bool  XetTotNghiep()const;
	int GetLoai();

};

