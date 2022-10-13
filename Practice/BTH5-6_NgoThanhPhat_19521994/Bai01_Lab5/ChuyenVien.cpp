#include "ChuyenVien.h"

void ChuyenVien::Nhap()
{
	NhanSu::Nhap();

	cout << "\nNhap so nam lam viec: ";cin >> n_NamLamViec;
	cout << "\nNhap so du an giao duc: "; cin >> n_DuAn_GD;
	cin.ignore();
	for (int i = 0;i < n_DuAn_GD;i++)
	{
		cout << "\nNhap ten du an: ";getline(cin, Ten_DuAn_GD);
		DS_MaDuAN_GD.push_back(Ten_DuAn_GD);
	}
	for (int i = 0; i < DS_MaDuAN_GD.size(); i++)
	{
		if (DS_MaDuAN_GD[i][0] == 84)
			count_T++;
	}
}

void ChuyenVien::Xuat()
{
	cout << "\t\t +++++ Chuyen Vien +++++\n";
	NhanSu::Xuat();

	cout << "\nSo nam lam viec: " << n_NamLamViec << endl;
	cout << "\nSo du an giao duc: " << n_DuAn_GD << endl;
	for (int i = 0;i < n_DuAn_GD;i++)
	{
		cout << DS_MaDuAN_GD[i] << endl;
	}
}

float ChuyenVien::TongLuong()
{
	return ((n_NamLamViec * 4 + this->count_T) * 18000);
}