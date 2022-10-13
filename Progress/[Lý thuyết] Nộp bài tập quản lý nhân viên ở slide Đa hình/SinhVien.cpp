#include "SinhVien.h"


void SinhVien::Nhap()
{
	//cin.ignore();
	cout << "Nhap mssv:";
	cin.ignore();
	getline(cin, Mssv);
	cout << "Nhap ho ten sv:";
	getline(cin, HoTen);
	//cin.ignore();
	cout << "Nhap dia chi sv:";
	getline(cin, DiaChi);
	//cin.ignore();
	cout << "Nhap so luong tin chi:";
	cin >> Tong_TinChi;
	cout << "Nhap diem trung binh sv:";
	cin >> Diem_TB;
	//cin.ignore();

}
void SinhVien::Xuat()
{

	cout << "------------/////////////----------" << endl;
	cout << "Mssv:" << Mssv << endl;
	cout << "Ho ten:" << HoTen << endl;
	cout << "Dia chi:" << DiaChi << endl;
	cout << "Tong tin chi:" << Tong_TinChi << endl;
	cout << "Diem trung binh:" << Diem_TB << endl;
}
float SinhVien::getDiem_Tb()
{
	return Diem_TB;
}
