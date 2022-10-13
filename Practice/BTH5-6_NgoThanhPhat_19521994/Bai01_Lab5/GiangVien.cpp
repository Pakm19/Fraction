#include "GiangVien.h"

void GiangVien::Nhap()
{
	NhanSu::Nhap();

	cout << "\nNhap hoc ham giang vien: ";
	getline(cin, HocHam);
	cout << "\nNhap hoc vi giang vien: ";
	getline(cin, HocVi);
	cout << "\nNhap so nam giang day: ";cin >> n_NamGiangDay;
	cout << "\nNhap so luong mon day: "; cin >> n_monday;
	cin.ignore();

	for (int i = 0;i < n_monday;i++)
	{
		
		cout << "Nhap ten mon day: ";
		getline(cin, TenMonDay);
		MonDay.push_back(TenMonDay);

	}
	
}
void GiangVien::Xuat()
{
	cout << "\t\t +++++ Giang Vien +++++\n";
	NhanSu::Xuat();

	cout << "\nHoc ham: " << HocHam << endl;
	cout << "\nHoc vi: " << HocVi << endl;
	cout << "\nSo nam giang day: " << n_NamGiangDay << endl;
	cout << "\nSo luong mon day: " << n_monday << endl;
	cout << "\nDanh sach mon day: " << endl;
	for (int i = 0; i < n_monday; i++)
	{
		cout << MonDay[i] << endl;
	}
	
}

float GiangVien::TongLuong()
{
	return (n_monday * n_NamGiangDay * 0.12) *20000;
}
