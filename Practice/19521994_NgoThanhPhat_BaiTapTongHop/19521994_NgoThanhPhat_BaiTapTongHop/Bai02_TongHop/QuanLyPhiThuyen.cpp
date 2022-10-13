#include "QuanLyPhiThuyen.h"

QuanLyPhiThuyen::QuanLyPhiThuyen()
{
	this->TongA = 0;
	this->TongR = 0;
	this->TongS = 0;
	this->a = 0;
	this->r = 0;
	this->s = 0;
	this->ds_Apollo = new Apollo[100];
	this->ds_Rocketo = new Rocketo[100];
	this->ds_Shieldeto = new Shieldeto[100];
}



/*void QuanLyPhiThuyen::Nhap()
{
	while (true)
	{
		int luachon;
		system("cls");
		cout << "\n\n\t\t =============== Tram Khong Giang ===============";
		cout << "\n \t 1. Apollo";
		cout << "\n \t 2. Rocketo";
		cout << "\n \t 3. Shieldeto";
		cout << "\n \t 0. Ket Thuc";
		cout << "\n\tNhap lua chon: ";
		cin >> luachon;
		cin.ignore();
		PhiThuyen* x = NULL;
		if (luachon == 1)
		{
			x = new Apollo;
			x->Nhap();
			dspt.push_back(x);
		}
		if (luachon == 2)
		{
			x = new Rocketo;
			x->Nhap();
			dspt.push_back(x);
		}
		if (luachon == 3)
		{
			x = new Shieldeto;
			x->Nhap();
			dspt.push_back(x);
		}
		if (luachon == 0)
		{
			break;
		}
	}
}

void QuanLyPhiThuyen::Xuat()
{
	for (int i = 0;i < dspt.size();i++)
	{
		dspt[i]->Xuat();
	}
}*/


void QuanLyPhiThuyen::NhienLieuTieuThu(int T)
{
	for (int i = 0;i < a;i++)
	{
		TongA += ds_Apollo[i].NhienLieuTieuThu(T);
	}
	for (int j = 0;j < r;j++)
	{
		TongR += ds_Rocketo[j].NhienLieuTieuThu(T);
	}
	for (int y = 0;y < s;y++)
	{
		TongS += ds_Shieldeto[y].NhienLieuTieuThu(T);
	}
		
	cout << "\nTong Nhien Lieu Apollo: " << TongA << endl;
	cout << "Tong Nhien Lieu Rocketo: " << TongR << endl;
	cout << "Tong Nhien Lieu Shieldeto: " << TongS << endl;
}

void QuanLyPhiThuyen::TongTieuThu(int T)
{
	cout << "\n\nTong Nhien Lieu Tieu Thu: " << TongA + TongR + TongS << endl;
}

QuanLyPhiThuyen::~QuanLyPhiThuyen()
{

}

istream& operator>>(istream& is, QuanLyPhiThuyen& dspt)
{
	// TODO: insert return statement here
	
	cout << "\t\tNhap So Luong Tau Apollo: ";
	is >> dspt.a;
	//cin.ignore();
	for (int i = 0; i < dspt.a; i++)
	{
		is >> dspt.ds_Apollo[i];
	}

	cout << "\n\t\tNhap So Luong Rocketo: ";
	is >> dspt.r;
	for (int j = 0;j < dspt.r;j++)
	{
		is >> dspt.ds_Rocketo[j];
	}
	cout << "\n\t\tNhap So Luong Shieldeto: ";
	is >> dspt.s;
	for (int y = 0;y < dspt.s;y++)
	{
		is >> dspt.ds_Shieldeto[y];
	}
	return is;

}

ostream& operator<<(ostream& os, const QuanLyPhiThuyen& dspt)
{
	// TODO: insert return statement here
	cout << "\n\tDanh Sach Tau Apollo\n";
	for (int i = 0;i < dspt.a;i++)
	{
		os << dspt.ds_Apollo[i];
	}
	cout << "\n\tDanh Sach Mon Rocketo\n";
	for (int j = 0;j < dspt.r;j++)
	{
		os << dspt.ds_Rocketo[j];
	}
	cout << "\n\tDanh Sach Mon Shieldeto\n";
	for (int y = 0;y < dspt.s;y++)
	{
		os << dspt.ds_Shieldeto[y];
	}
	return os;
}



