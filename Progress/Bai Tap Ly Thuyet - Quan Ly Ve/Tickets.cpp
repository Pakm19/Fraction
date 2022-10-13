#include "Tickets.h"

void Tickets::Nhap()
{
	cout << "Nhap ma ve: ";cin.ignore();getline(cin, Maso);
	cout << "Nhap ho ten: "; getline(cin, Hoten);
	cout << "Nhap nam sinh: "; cin >> Namsinh;
	//cout << "Nhap so luong tro choi tham gia: "; cin >> n_Trochoi_thamgia;

}
void Tickets::Xuat()
{
	cout << "Ma so: " << Maso << endl;
	cout << "Ho ten: " << Hoten << endl;
	cout << "Nam sinh: " << Namsinh << endl;
	//cout << "So luong tro choi tham gia: " << n_Trochoi_thamgia << endl;
}
