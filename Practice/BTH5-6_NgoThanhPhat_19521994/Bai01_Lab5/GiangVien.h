#pragma once
#include "NhanSu.h"
#include <string>
#include <vector>

class GiangVien : public NhanSu

{
private:
	string HocHam;
	string HocVi;
	int n_NamGiangDay;
	string TenMonDay;
	int n_monday;
	vector <string> MonDay;
public:
	void Nhap();
	void Xuat();
	float TongLuong() ;
};

