#pragma once
#include "SinhVien.h"
#include "SinhVien_ĐH.h"
#include"SinhVien_CĐ.h"
#include <iostream>
#include <vector>

using namespace std;
class School
{
private:
	vector<SinhVien*> dssv;
public:
	School();
	void Nhap();
	void Xuat();
	int DS_SvTotNghiep();
	void Sv_dh_maxdiem()const;

	~School();

};

