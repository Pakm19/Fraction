#include "Truong.h"



Truong::Truong()
{

}

void Truong::Nhap()
	{
		while (true)
		{
			int luachon;
			system("cls");
			cout << "\n\n\t\t =============== UIT ===============";
			cout << "\n \t 1. Giang Vien";
			cout << "\n \t 2. Tro Giang";
			cout << "\n \t 3. Nghien Cuu Vien";
			cout << "\n \t 4. Chuyen Vien";
			cout << "\n \t 0. Ket Thuc";
			cout << "\n\tNhap lua chon: ";
			cin >> luachon;
			cin.ignore();
			NhanSu* x = NULL;
			if (luachon == 1)
			{
				x = new GiangVien;
				x->Nhap();
				dsns.push_back(x);
			}
			if (luachon == 2)
			{
				x = new TroGiang;
				x->Nhap();
				dsns.push_back(x);
			}
			if (luachon == 3)
			{
				x = new NghienCuuVien;
				x->Nhap();
				dsns.push_back(x);
			}
			if (luachon == 4)
			{
				x = new ChuyenVien;
				x->Nhap();
				dsns.push_back(x);
			}
			if (luachon == 0)
			{
				break;
			}
		}
	}

void Truong::Xuat()
{
		cout << "\n\n\t\t ======= Danh Sach Nhan Su ======= \n ";
		for (int i = 0;i < dsns.size();i++)
		{
			dsns[i]->Xuat();
		}
}

float Truong::TongLuong()
{
	int Tong = 0;
	for (int i = 0;i < dsns.size();i++)
	{
		Tong += dsns[i]->TongLuong();
	}
	return Tong;
}

Truong::~Truong()
{

}
