#include "CanBo.h"

void CanBo::Nhap()
{
	cout << "\nNhap ma so: ";
	getline(cin, Maso);
	cout << "\nNhap ho ten: ";
	getline(cin, Hoten);
	cout << "\nNhap ngay sinh: "; getline(cin, Ngaysinh);
	
}

void CanBo::Xuat()
{

	cout << "\nMa so: " << Maso << endl;
	cout << "\nHo ten: " << Hoten << endl;
	cout << "\nNgay sinh: " << Ngaysinh << endl;
	
	
}

int CanBo::TongLuong()
{
	return Luong;
}
