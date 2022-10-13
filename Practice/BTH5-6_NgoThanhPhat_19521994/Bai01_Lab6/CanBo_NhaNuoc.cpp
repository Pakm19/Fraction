#include "CanBo_NhaNuoc.h"

void CanBo_NhaNuoc::Nhap()
{
	CanBo::Nhap();
	cout << "\nNhap luong co ban: "; cin >> Luong_coban;
	cout << "\nNhap he so luong: "; cin >> HeSo_luong;
	cout << "\nNhap he so phu cap: ";cin >> HeSo_phucap;

}
void CanBo_NhaNuoc::Xuat()
{
	cout << "\tCan bo nha nuoc\n";
	CanBo::Xuat();

	cout << "\nLuong co ban: " << Luong_coban << endl;
	cout << "\nHe so luong: " << HeSo_luong << endl;
	cout << "\nHe so phu cap: " << HeSo_phucap << endl;
	cout << "\n" << endl;

}
int CanBo_NhaNuoc::TongLuong()
{ 
	return Luong_coban * HeSo_luong * HeSo_phucap;
}
