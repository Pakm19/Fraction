#pragma once
#include "NhanSu.h"
#include <vector>
#include <string>

class ChuyenVien : public NhanSu
{
private: 
	int n_NamLamViec;
	int n_DuAn_GD;
	string Ten_DuAn_GD;
	vector <string> DS_MaDuAN_GD;
	int count_T = 0;
public:
	void Nhap();
	void Xuat();
	float TongLuong();

};

