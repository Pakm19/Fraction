#pragma once
#include "NhanSu.h"
class TroGiang : public NhanSu
{
private:
	int n_MonTroGiang;
public:
	void Nhap();
	void Xuat();
	float TongLuong();
};

