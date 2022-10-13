#include "DanhSachMonHoc.h"

DanhSachMonHoc::DanhSachMonHoc()
{
	this->n_nMonKiemTra = 0;
	this->m_nMonThi = 0;
	this->ds_MonThi = new MonThi[100];
	this->ds_MonKT = new MonKiemTra[100];
}

/*void DanhSachMonHoc::Nhap()
{
	cout << "\t\tNhap So Luong Mon Thi: ";
	cin >> m_nMonThi;
	cin.ignore();
	for (int i = 0; i < m_nMonThi; i++)
	{		
		ds_MonThi[i].Nhap();
	}

	cout << "\n\t\tNhap So Luong Mon Kiem Tra: ";
	cin >> n_nMonKiemTra;
	for (int j = 0;j < n_nMonKiemTra;j++)
	{
		ds_MonKT[j].Nhap();
	}
}


void DanhSachMonHoc::Xuat()
{
	cout << "\n\tDanh Sach Mon Thi\n";
	for (int i = 0;i < m_nMonThi;i++)
	{
		ds_MonThi[i].Xuat();
	}
	cout << "\n\tDanh Sach Mon Kiem Tra\n";
	for (int j = 0;j < n_nMonKiemTra;j++)
	{
		ds_MonKT[j].Xuat();
	}
}*/

void DanhSachMonHoc::DiemMonHoc_Max()
{
	float a = ds_MonKT[0].DiemTongKet();
	for (int i = 1;i < n_nMonKiemTra;i++)
	{
		if (ds_MonKT[i].DiemTongKet() > a)
		{
			a = ds_MonKT[i].DiemTongKet();
		}
	}
	float b = ds_MonThi[0].DiemTongKet();
	for (int j = 1;j < m_nMonThi;j++)
	{
		if (ds_MonThi[j].DiemTongKet() > b)
		{
			b = ds_MonThi[j].DiemTongKet();
		}
	}
	if (a > b)
	{
		cout << "\n\n\tDiem Tong Ket Mon Hoc Lon Nhat: " << a;
	}
	cout << "\n\n\tDiem Tong Ket Mon Hoc Lon Nhat: " << b;

}

void DanhSachMonHoc::DiemTB_HocKy()
{
	float a=0, b=0, c=0, d=0, DTB = 0;
	for (int i = 0;i < m_nMonThi; i++)
	{
		a += (ds_MonThi[i].getHeSo_Mh() * ds_MonThi[i].DiemTongKet()); //mi.ai
		b += (ds_MonThi[i].getHeSo_Mh()); // mi
	}
	for (int j = 0;j < n_nMonKiemTra; j++)
	{
		c += (ds_MonKT[j].getHeSo_Mh() * ds_MonKT[j].DiemTongKet()); //njbj
		d += (ds_MonKT[j].getHeSo_Mh()); //nj
	}
	DTB = ((2 * a) + b) / ((2 * b) + d);
	cout << "\n\tDiem Trung Binh Hoc Ky: " << DTB;
}
DanhSachMonHoc::~DanhSachMonHoc()
{
	delete [] ds_MonThi;
	delete[] ds_MonKT;
}

istream& operator>>(istream& is, DanhSachMonHoc& dsmh)
{
	// TODO: insert return statement here
	cout << "\t\tNhap So Luong Mon Thi: ";
	is >> dsmh.m_nMonThi;
	cin.ignore();
	for (int i = 0; i <dsmh. m_nMonThi; i++)
	{
		is >> dsmh.ds_MonThi[i];
	}

	cout << "\n\t\tNhap So Luong Mon Kiem Tra: ";
	is >> dsmh.n_nMonKiemTra;
	for (int j = 0;j <dsmh.n_nMonKiemTra;j++)
	{
		is >> dsmh.ds_MonKT[j];
	}
	return is;

}

ostream& operator<<(ostream& os, const DanhSachMonHoc& dsmh)
{
	// TODO: insert return statement here
	cout << "\n\tDanh Sach Mon Thi\n";
	for (int i = 0;i < dsmh.m_nMonThi;i++)
	{
		os << dsmh.ds_MonThi[i];
	}
	cout << "\n\tDanh Sach Mon Kiem Tra\n";
	for (int j = 0;j < dsmh.n_nMonKiemTra;j++)
	{
		os << dsmh.ds_MonKT[j];
	}
	return os;

}
