#include "TroGiang.h"

void TroGiang::Nhap()
{
	NhanSu::Nhap();

	cout << "\nNhap so mon tro giang: "; cin >> n_MonTroGiang;
}

void TroGiang::Xuat()
{
	cout << "\t\t +++++ Tro Giang +++++\n";
	NhanSu::Xuat();

	cout << "\nSo mon tro giang: " << n_MonTroGiang << endl;

}

float TroGiang::TongLuong()
{
	return (n_MonTroGiang * 0.3) * 18000;
}
