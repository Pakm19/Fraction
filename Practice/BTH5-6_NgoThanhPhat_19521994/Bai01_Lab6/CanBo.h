#pragma once
#include <string>
#include <iostream>

using namespace std;
class CanBo
{
protected:
	string Maso;
	string Hoten;
	string Ngaysinh;
	int Luong = 0;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual  int TongLuong() = 0;
};

