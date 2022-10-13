#pragma once
#include <vector>
#include <string>
#include <iostream>

using namespace std;
class DongVat
{
protected:
	int Loai_DV;
public:
	DongVat();
	~DongVat();
	virtual void Keu() = 0;
	virtual int LitSua() = 0;
	virtual vector<DongVat*> SinhCon(void) = 0; //Trả về kiểu vector
	
	
};

