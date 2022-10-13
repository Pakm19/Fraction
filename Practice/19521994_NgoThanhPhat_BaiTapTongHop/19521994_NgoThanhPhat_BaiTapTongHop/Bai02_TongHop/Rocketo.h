#pragma once
#include "PhiThuyen.h"
class Rocketo : public PhiThuyen
{
private:
	float HoaLuc_M;
public:
	Rocketo();
	Rocketo(int, string);

	float getHoaLuc();
	float NhienLieuTieuThu(int);
	int getLoai();

	friend istream& operator>> (istream& is, Rocketo& rk);
	friend ostream& operator<< (ostream & os, const Rocketo & rk);


	~Rocketo();
};

