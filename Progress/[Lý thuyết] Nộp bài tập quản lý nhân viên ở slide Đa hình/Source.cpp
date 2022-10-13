#include <iostream>
#include "School.h"

using namespace std;
int main()
{
	School* a = new School;
	a->Nhap();
	//a->Xuat();
	cout << "So luong sinh vien du dieu kien tot nghiep: " << a->DS_SvTotNghiep() << endl;
  	a->Sv_dh_maxdiem();

};