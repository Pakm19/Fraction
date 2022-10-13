#pragma once
#include <vector>
#include "NhanSu.h"
#include <string>
using namespace std;

class NghienCuuVien : public NhanSu
{
private:
	int n_Ma_duan;
	int n_NamKinhNghiem;
	string Ten_duan;
	vector <string> Ma_DA;
	int count_D = 0;
	
public:
	void Nhap();
	void Xuat();
	float TongLuong();
	
};

