#pragma once
#include "CanBo.h"
#include"CanBo_HopDong.h"
#include"CanBo_NhaNuoc.h"
#include <vector>

class CongTy_ABC
{
private:
	vector<CanBo*> ds_canbo;
public:
	CongTy_ABC();
	void Nhap();
	void Xuat();
	int Tongluong();
	//~CongTy_ABC()
	 

};

