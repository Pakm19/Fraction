#pragma once
#include "MonHoc.h"
class MonThi : public MonHoc
{
private:
	float DiemThi_Tongmon;
public:
	MonThi();

	void Nhap();
	void Xuat();
	float DTB_KT();
	float DiemTongKet();

	friend istream& operator>>(istream& is, MonThi& mt);
	friend ostream& operator<<(ostream& os, const MonThi& mt);

	~MonThi();
};

