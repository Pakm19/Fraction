#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class NhanSu 
{
protected:
	string HoTen;
	string NgaySinh;
	string MaSo;
	float Luong;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TongLuong();
	

};

