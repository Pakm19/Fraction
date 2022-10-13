#include "GiangVien.h"
#include "NhanSu.h"
#include "TroGiang.h"
#include <iostream>
#include <string.h>
#include "Truong.h"

using namespace std;
int main()
{
	Truong a;
	a.Nhap();
	a.Xuat();
	cout << a.TongLuong();
}