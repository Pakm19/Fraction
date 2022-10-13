#pragma once
#include "CanBo.h"
class CanBo_NhaNuoc : public CanBo
{
private:
	int Luong_coban;
	int HeSo_luong;
	int HeSo_phucap;
public:
	void Nhap();
	void Xuat();
	int TongLuong();


};

