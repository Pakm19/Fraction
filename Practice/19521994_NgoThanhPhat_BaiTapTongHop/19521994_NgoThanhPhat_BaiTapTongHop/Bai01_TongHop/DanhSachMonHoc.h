#pragma once
#include "MonHoc.h"
#include "MonKiemTra.h"
#include "MonThi.h"
#include <vector>
class DanhSachMonHoc
{
private:
	int m_nMonThi, n_nMonKiemTra;
	MonThi* ds_MonThi;
	MonKiemTra* ds_MonKT;
	
public:
	DanhSachMonHoc();
	

	//void Nhap();
	//void Xuat();

	void DiemMonHoc_Max();
	void DiemTB_HocKy();

	friend istream& operator>>(istream& is,DanhSachMonHoc&  dsmh);
	friend ostream& operator<<(ostream& os,const DanhSachMonHoc& dsmh);

	~DanhSachMonHoc();

};

