#include "De.h"

void De::Keu()
{
	cout << "\nTa la de dayyy" << endl;
}

int De::getLoai()
{
	return 2;
}

int De::LitSua()
{
	return rand() % 11;
}

vector<DongVat*> De::SinhCon(void)
{
	int socon = 1 + rand() % 6;
	vector<DongVat*> con;
	for (int i = 0; i < socon; i++)
		con.push_back(new De());
	return con;
	
}
