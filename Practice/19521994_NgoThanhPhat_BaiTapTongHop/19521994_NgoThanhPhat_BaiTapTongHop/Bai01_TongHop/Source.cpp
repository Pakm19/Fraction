#include "DanhSachMonHoc.h"
#include "MonHoc.h"
#include "MonKiemTra.h"
#include "MonThi.h"
#include <iostream>

using namespace std;
int main()
{
	DanhSachMonHoc a;
	cin >> a;
	cout << a;
	a.DiemMonHoc_Max();
	a.DiemTB_HocKy();

}