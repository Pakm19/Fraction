#include "School.h"

School::School()
{

}

void School::Nhap()
{
	while (true)
	{
		int luachon;
		system("cls");
		cout << "\n\n\t\t =============== UIT ===============";
		cout << "\n \t 1. Sinh vien dai hoc";
		cout << "\n \t 2. Sinh vien cao dang";
		cout << "\n \t 0. Ket thuc";
		cout << "\n\tNhap lua chon: ";
		cin >> luachon;
		cin.ignore();
		SinhVien* a = NULL;
		if (luachon == 1)
		{
			a = new SinhVien_ĐH;
			a->Nhap();
			dssv.push_back(a);
		}
		if (luachon == 2)
		{
			a = new SinhVien_CĐ;
			a->Nhap();
			dssv.push_back(a);
		}
		if (luachon == 0)
		{
			break;
		}
	}
}
void School::Xuat()
{
	cout << "\n\n\t\t ======= Danh Sach Sinh Vien ======= \n ";
	for (int i = 0;i < dssv.size();i++)
	{
		dssv[i]->Xuat();
	}
}

int  School::DS_SvTotNghiep()
{
	int dem = 0;
	for (int i = 0;i < dssv.size(); i++)
	{
		if (dssv[i]->XetTotNghiep() == 1)
		{
			dem++;
		}
	}
	return dem;

}

void School::Sv_dh_maxdiem()const
{
	SinhVien* sv = NULL;
	for (int i = 0;i < dssv.size();i++)
	{
		if (dssv[i]->GetLoai() == 2)
		{
			if (sv == NULL || sv->getDiem_Tb() < dssv[i]->getDiem_Tb())
			{
				sv = dssv[i];
			}
		}
	}
	cout << "Sinh vien dai hoc diem trung binh lon nhat: ";
	sv->Xuat();
}
School::~School()
{
	for (int i = 0; i < dssv.size();i++)
	{
		delete dssv[i];
	}

}

