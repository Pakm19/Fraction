#pragma once
#include "CanBo.h"
class CanBo_HopDong : public CanBo
{
private:
	int Tien_cong;
	int Songay_cong;
	int Heso_vuotgio;
public:
	void Nhap();
	void Xuat();
	int TongLuong();

};

