#pragma once
#include"NhanSu.h"

#include "GiangVien.h"
#include "TroGiang.h"

#include "ChuyenVien.h"
#include "NghienCuuVien.h"

#include <iostream>
#include <vector>

using namespace std;

class Truong 
{
private:
	vector<NhanSu*> dsns;
public:
	Truong();

	void Nhap();
	void Xuat();
	float TongLuong();

	~Truong();
};

