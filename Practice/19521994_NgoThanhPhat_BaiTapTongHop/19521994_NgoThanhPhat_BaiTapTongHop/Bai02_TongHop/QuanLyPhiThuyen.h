#pragma once
#include "PhiThuyen.h"
#include "Apollo.h"
#include"Rocketo.h"
#include "Shieldeto.h"
#include <vector>
class QuanLyPhiThuyen
{
private:
	Apollo* ds_Apollo;
	Rocketo* ds_Rocketo;
	Shieldeto* ds_Shieldeto;
	//vector<PhiThuyen*> dspt;
	int a, r, s;
	float TongA, TongR, TongS;
public:
	QuanLyPhiThuyen();
	

	//void Nhap();
	//void Xuat();
	void NhienLieuTieuThu(int);
	void TongTieuThu(int);
	
	friend istream& operator>>(istream& is, QuanLyPhiThuyen& dspt);
	friend ostream& operator<<(ostream& os, const QuanLyPhiThuyen& dspt);

	~QuanLyPhiThuyen();

};

