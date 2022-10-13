#include "Bo.h"

void Bo::Keu()
{
	cout << "\nTa la bo dayyyy" << endl;
}

int Bo::getloai()const
{
	return 1;
}

int Bo::LitSua()
{
	return rand() % 21;
}

//Trả về mảng con 
vector<DongVat*> Bo::SinhCon(void)
{
	int socon = 1 + rand() % 6;
	vector<DongVat*> con;
	for (int i = 0; i < socon; i++)
		con.push_back(new Bo());
	return con;
}
	

