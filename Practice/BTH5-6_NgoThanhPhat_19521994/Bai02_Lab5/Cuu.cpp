#include "Cuu.h"

void Cuu::Keu()
{
	cout << "\nTa la cuu nha qui zi" << endl;
}

int Cuu::getLoai()
{
	return 3;
}

int Cuu::LitSua()
{
	return rand() % 6;
}

vector<DongVat*> Cuu::SinhCon(void)
{
	int socon = 1 + rand() % 6;
	vector<DongVat*> con;
	for (int i = 0; i < socon; i++)
		con.push_back(new Cuu());
	return con;
	
}


