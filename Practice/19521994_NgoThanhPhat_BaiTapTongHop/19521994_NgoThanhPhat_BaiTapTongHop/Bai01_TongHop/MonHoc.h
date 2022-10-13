#pragma once
#include <string>
#include <iostream>

using namespace std;
class MonHoc
{
protected:
	string MaSo_Monhoc;
	string Ten_Monhoc;
	float HeSo_Mh;
	float HeSo_1;
	float HeSo_2;
public:
	MonHoc();
	MonHoc(string, string,float, float,float);

	void setMaSo(string);
	void setTen(string);
	void setHeSo_Mh(float);
	void setHeSo_1(float);
	void setHeSo_2(float);

	string getMaSo();
	string getTen();
	float getHeSo_Mh();
	float getHeSo_1();
	float getHeSo_2();
	
    virtual void Nhap();
	virtual void Xuat();
	virtual float DiemTongKet() = 0;

	friend istream& operator>>(istream& is, MonHoc& mh);
	friend ostream& operator<<(ostream& os, const MonHoc& mh);

	~MonHoc();


};

