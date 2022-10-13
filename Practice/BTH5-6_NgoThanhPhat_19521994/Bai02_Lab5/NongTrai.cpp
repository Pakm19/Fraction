#include "NongTrai.h"

void NongTrai::Nhap()
{
	while (true)
	{
		int luachon;
		system("cls");
		cout << "\n\n\t\t =============== Nong Trai Vui Ve ===============";
		cout << "\n \t 1. Bo";
		cout << "\n \t 2. De";
		cout << "\n \t 3. Cuu";
		cout << "\n \t 0. Ket Thuc";
		cout << "\n\tNhap lua chon: ";
		cin >> luachon;
		cin.ignore();
		DongVat* x = NULL;
		if (luachon == 1)
		{
			x = new Bo;
			dsdv.push_back(x);
		}
		if (luachon == 2)
		{
			x = new De;
			dsdv.push_back(x);
			
		}
		if (luachon == 3)
		{
			x = new Cuu;
			dsdv.push_back(x);

		}
		if (luachon == 0)
		{
			break;
		}
	}
}

void NongTrai::Keu()
{
	for (int i = 0;i < dsdv.size();i++)
	{
		dsdv[i]->Keu();
	}
}
int NongTrai::LitSua()
{
	int sua = 0;
	for (int i = 0;i < dsdv.size();i++)
	{
		sua += dsdv[i]->LitSua();
	}
	return sua;
}

void NongTrai::Tong_MevaCon()
{
	int sl = (int)dsdv.size();
	for (int i = 0; i < sl; i++)
	{
		vector<DongVat*> t = dsdv[i]->SinhCon();
		for (int j = 0; j < (int)t.size(); j++)
			dsdv.push_back(t[j]);
	}
	cout << "\n\nSo luong gia suc trong nong trai sau khi sinh con la: " << dsdv.size() << endl;
}


