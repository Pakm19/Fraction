#include "SinhVien_ĐH.h"

void SinhVien_ĐH::Nhap()
{
	SinhVien::Nhap();
	cout << "Nhap ten luan van:";
	cin.ignore();
	getline(cin, Ten_Luanvan);
	//cin.ignore();
	cout << "Nhap diem luan van:";
	cin >> Diem_Luanvan;
}
void SinhVien_ĐH::Xuat()
{
	SinhVien::Xuat();
	fflush(stdin);
	cout << "Ten luan van:" << Ten_Luanvan << endl;
	cout << "Diem luan van:" << Diem_Luanvan << endl;
}
bool SinhVien_ĐH::XetTotNghiep()const
{
	if ((Tong_TinChi >= 170 && Diem_TB >= 5) && Diem_Luanvan >= 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int SinhVien_ĐH::GetLoai()
{
	return 2;
}
