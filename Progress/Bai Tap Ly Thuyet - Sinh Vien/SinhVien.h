#pragma once
#include <iostream>
#include <string>
using namespace std;
class SinhVien
{
protected:
	string Mssv;
	string HoTen;
	string DiaChi;
	int Tong_TinChi;
	float Diem_TB;
public:
	
	virtual void Nhap();
	virtual void Xuat();
	virtual bool XetTotNghiep()const = 0;
	virtual int GetLoai() = 0;
	virtual float getDiem_Tb();
	

};

