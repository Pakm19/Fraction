#include "CanBo_HopDong.h"

void CanBo_HopDong::Nhap()
{
	CanBo::Nhap();
	cout << "\nNhap tien cong: ";cin >> Tien_cong;
	cout << "\nNhap so ngay cong: ";cin >> Songay_cong;
	cout << "\nNhap he so vuot gio: ";cin >> Heso_vuotgio;

}
void CanBo_HopDong::Xuat()
{
	cout << "\tCan bo hop dong\n";
	CanBo::Xuat();

	cout << "\nTien cong: " << Tien_cong << endl;
	cout << "\nSo ngay cong: " << Songay_cong << endl;
	cout << "\nHe so vuot gio: " << Heso_vuotgio << endl;
	cout << "\n" << endl;
}
int CanBo_HopDong::TongLuong()
{ 
	return Tien_cong * Songay_cong * Heso_vuotgio;

}
