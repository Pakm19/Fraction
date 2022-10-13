#include "NghienCuuVien.h"
#include <string.h>


void NghienCuuVien::Nhap()
{
	NhanSu::Nhap();

	cout << "\nNhap so nam kinh nghiem: "; cin >> n_NamKinhNghiem;
	cout << "\nNhap so luong du an: ";cin >> n_Ma_duan;
	cin.ignore();
	for (int i = 0;i < n_Ma_duan;i++)
	{
		cout << "Nhap ma du an: ";
		getline(cin, Ten_duan);
		Ma_DA.push_back(Ten_duan);
	}
	for (int i = 0; i < Ma_DA.size(); i++) 
	{
		if (Ma_DA[i][0] == 68)
			count_D++;
	}
}
void NghienCuuVien::Xuat()
{
	cout << "\t\t +++++ Nghien Cuu Vien +++++\n";
	NhanSu::Xuat();

	cout << "\nNam kinh nghiem: " << n_NamKinhNghiem << endl;
	cout << "\nSo luong du an: " << n_Ma_duan << endl;
	for (int i = 0;i < n_Ma_duan;i++)
	{
		
		cout << Ma_DA[i] << endl;
	}
}

float NghienCuuVien::TongLuong()
{
	return (n_NamKinhNghiem * 2 + this->count_D) * 20000; 
}


