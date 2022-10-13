#include"QuanLy.h"
#include<iostream>

using namespace std;
int main()
{
	QuanLy* a = new QuanLy;
	a->Nhap();
	a->Xuat();
	cout << "So ve thanh phan da ban la: " << a->n_Tickets_part() << " ve" << endl;
	cout << "Tong doanh thu: " << a->Tongtien_ve();
}