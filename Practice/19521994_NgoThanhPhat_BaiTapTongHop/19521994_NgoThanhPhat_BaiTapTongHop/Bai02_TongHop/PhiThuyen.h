#pragma once
#include <string>
#include <ctime>
#include <iostream>

using namespace std;

class PhiThuyen
{
protected:
	int SoHieu_PhiThuyen;
	string Ten_PhiThuyen;
	int HeSo_NhienLieu;
	int alpha;
public:
	PhiThuyen();
	PhiThuyen(int, string, int,int);
	
	 //virtual void Nhap();
	//virtual void Xuat();
	 virtual float NhienLieuTieuThu(int)= 0;
	 virtual int getLoai() = 0;

	void setSoHieu(int);
	void setTen(string);
	void setHeSo(int);
	void setalpha(int);

	int getSoHieu();
	string getTen();
	int getHeSo();
	int getalpha();

	friend istream& operator>>(istream& is, PhiThuyen& pt);
	friend ostream& operator<<(ostream& os, const PhiThuyen& pt);


	~PhiThuyen();

};

