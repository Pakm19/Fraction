#include "NhanSu.h"
#include <string>

using namespace std;

void NhanSu::Nhap()
{
	
	cout << "Nhap ho ten: ";
	//cin.ignore();
	getline(cin, HoTen);
	cout << "\nNhap ngay thang nam sinh: ";
	getline(cin, NgaySinh);
	
	cout << "\nNhap ma so: ";getline(cin, MaSo);

}
void NhanSu::Xuat()
{    
	cout << "\n\n *********************\n\n";
	cout << "\nHo ten: " << HoTen << endl;
	cout << "\nNgay sinh: " << NgaySinh << endl;
	cout << "\nMaSo: " << MaSo << endl;
}

float NhanSu::TongLuong()
{
	return Luong;
}

