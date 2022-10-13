#include "CongTy_ABC.h"
#include "CanBo.h"
#include "CanBo_NhaNuoc.h"
#include "CanBo_HopDong.h"

using namespace std;
int main()
{ 
	CongTy_ABC a;
	a.Nhap();
	a.Xuat();
	cout <<"\n\nTong luong can bo: " << a.Tongluong();
}