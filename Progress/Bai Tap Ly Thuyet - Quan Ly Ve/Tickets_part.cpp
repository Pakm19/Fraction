#include "Tickets_part.h"

void Tickets_part::Nhap()
{
	Tickets::Nhap();
	do {
		cout << "Nhap so luong tro choi tham gia: ";
		cin >> Soluong_trochoi;
	} while (Soluong_trochoi > 30);
	
}

void Tickets_part::Xuat()
{
	Tickets::Xuat();
		cout << "So luong tro choi tham gia:" << Soluong_trochoi;
}
 
int Tickets_part::Getloai()
{
	return 2;
}

int Tickets_part::Tongtien()
{
	return 70000;
}



