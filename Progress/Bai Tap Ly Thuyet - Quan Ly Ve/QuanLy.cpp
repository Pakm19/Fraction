#include "QuanLy.h"

QuanLy:: QuanLy()
{

}


void QuanLy::Nhap()
{
	while (true)
	{
		int luachon;
		system("cls");
		cout << "\n\n\t\t =============== Cong Vien Dam Sen ===============";
		cout << "\n \t 1. Tickets Full";
		cout << "\n \t 2. Tickets Part";
		cout << "\n \t 0. Ket thuc";
		cout << "\n\tNhap lua chon: ";
		cin >> luachon;
		cin.ignore();
		Tickets* a = NULL;
		if (luachon == 1)
		{
			a = new Tickets_full;
			a->Nhap();
			DS_ticket.push_back(a);
		}
		if (luachon == 2)
		{
			a = new Tickets_part;
			a->Nhap();
			DS_ticket.push_back(a);
		}
		if (luachon == 0)
		{
			break;
		}
	}
}

void QuanLy::Xuat()
{
	cout << "\n\n\t\t ======= Danh Sach Ban Ve ======= \n ";
	for (int i = 0;i < DS_ticket.size();i++)
	{
		cout << "+++++++++ Thong tin khach hang thu " << i << " +++++++++" << endl;
		DS_ticket[i]->Xuat();
		cout << "\n******************\n";

	}
}

int QuanLy::Tongtien_ve()
{
	int Tong = 0;
	for (int i = 0;i < DS_ticket.size();i++)
	{
			Tong += DS_ticket[i]->Tongtien();		 
	}
	return Tong;
}

int QuanLy::n_Tickets_part()
{
	int dem = 0;
	for (int i = 0;i < DS_ticket.size();i++)
		if (DS_ticket[i]->Getloai() == 2)
			dem++;
	return dem;
}
