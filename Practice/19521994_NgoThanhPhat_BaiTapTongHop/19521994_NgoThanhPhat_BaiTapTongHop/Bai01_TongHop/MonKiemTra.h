#pragma once
#include "MonHoc.h"
class MonKiemTra : public MonHoc
{
private:
	float HeSo_3;
public:
    MonKiemTra();

     void Nhap();
     void Xuat();
     float DiemTongKet();

     friend istream& operator>>(istream& is, MonKiemTra& mkt);
     friend ostream& operator<<(ostream& os, const MonKiemTra& mkt);

     ~MonKiemTra();
};

