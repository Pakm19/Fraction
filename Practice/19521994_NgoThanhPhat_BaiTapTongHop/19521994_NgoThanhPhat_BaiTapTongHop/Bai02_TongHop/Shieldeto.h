#pragma once
#include "PhiThuyen.h"
class Shieldeto : public PhiThuyen
{
private:
	float Bankinh_R;
public:
	Shieldeto();
	Shieldeto(int, string);

	float getBanKinh();
	float NhienLieuTieuThu(int);
	int getLoai();

	friend istream& operator>>(istream& is, Shieldeto& Shi);
	friend ostream& operator<<(ostream& os, const Shieldeto& Shi);
	~Shieldeto();

};

