#pragma once
#include <stdlib.h>
#include <time.h>
#include "DongVat.h"
class Bo : public DongVat
{
public:
	void Keu();
	int getloai()const;
	int LitSua();
	vector<DongVat*> SinhCon(void);

};

