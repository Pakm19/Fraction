#include "SinhVien_CĐ.h"



void SinhVien_CĐ::Nhap()
{
	SinhVien::Nhap();
	cout << "Nhap diem tot nghiep:";
	cin >> Diem_Totnghiep;
}
void SinhVien_CĐ::Xuat()
{
	SinhVien::Xuat();
	cin.ignore();
	cout << "Diem trung binh:" << Diem_TB << endl;
}
bool SinhVien_CĐ::XetTotNghiep()const
{
	if (Tong_TinChi >= 120 && Diem_TB >= 5 && Diem_Totnghiep >= 5)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int SinhVien_CĐ::GetLoai()
{
	return 1;
}

