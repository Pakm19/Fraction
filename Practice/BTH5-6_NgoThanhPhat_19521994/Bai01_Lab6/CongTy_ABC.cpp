#include "CongTy_ABC.h"

CongTy_ABC::CongTy_ABC()
{

}

void CongTy_ABC::Nhap()
{
	while (true)
	{
		int luachon;
		system("cls");
		cout << "\n\n\t\t =============== Cong Ty ABC ===============";
		cout << "\n \t 1. Can bo nha nuoc";
		cout << "\n \t 2. Can bo hop dong";
		cout << "\n \t 0. Ket Thuc";
		cout << "\n\tNhap lua chon: ";
		cin >> luachon;
		cin.ignore();
		CanBo* a = NULL;
		if (luachon == 1)
		{
			a = new CanBo_NhaNuoc;
			a->Nhap();
			ds_canbo.push_back(a);
		}
		if (luachon == 2)
		{
			a = new CanBo_HopDong;
			a->Nhap();
			ds_canbo.push_back(a);
		}
		if (luachon == 0)
		{
			break;
		}
	}
}

void CongTy_ABC::Xuat()
{
	cout << "\n\n\t\t ======= Danh Sach Can Bo ======= \n ";
	for (int i = 0;i < ds_canbo.size();i++)
	{
		ds_canbo[i]->Xuat();
	}
}
int CongTy_ABC::Tongluong()
{ 
	int Tong = 0;
	for (int i = 0;i < ds_canbo.size();i++)
	{
		Tong += ds_canbo[i]->TongLuong();
	}
	return Tong;
}
