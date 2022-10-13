#pragma once
#include "DongVat.h"
#include <stdlib.h>
#include <time.h>
class De : public DongVat
{
private:
	vector<DongVat*>ds_de;
public:
	void Keu();
	int getLoai();
	int LitSua();
	vector<DongVat*> SinhCon(void);
};

