#pragma once
#include <string>
#include <string.h>
#include <iostream>

using namespace std;
class Tickets
{
protected:
	string Maso;
	string Hoten;
	int Namsinh;
	int n_Trochoi_thamgia;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int Tongtien() = 0;
	virtual int Getloai() = 0;




};

