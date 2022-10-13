#pragma once
#include "PhiThuyen.h"
class Apollo : public PhiThuyen
{
private:
	int n_Nguoi;
public:
	Apollo();
	Apollo(int,string);

	
	float NhienLieuTieuThu(int);
	int getn_Nguoi();
	int getLoai();

	friend istream& operator>>(istream& is, Apollo& ap);
	friend ostream& operator<<(ostream& os, const Apollo& ap);

	~Apollo();
};

