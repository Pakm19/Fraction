#pragma once
#include "DongVat.h"
#include <stdlib.h>
#include<time.h>

class Cuu : public DongVat
{
private:
	vector<DongVat*>ds_cuu;
public:
	void Keu();
	int getLoai();
	int LitSua();
	vector<DongVat*> SinhCon(void);

};

