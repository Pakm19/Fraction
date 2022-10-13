#include "QuanLyPhiThuyen.h"
#include "PhiThuyen.h"
#include "Apollo.h"
#include "Rocketo.h"
#include "Shieldeto.h"

using namespace std;
int main()
{
	QuanLyPhiThuyen a;
	cin >> a;
	cout << a;
	//a.Nhap();
	//a.Xuat();
	a.NhienLieuTieuThu(3600);
	a.TongTieuThu(3600);
}