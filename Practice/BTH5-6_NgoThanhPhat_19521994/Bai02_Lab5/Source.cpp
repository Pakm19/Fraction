#include "NongTrai.h"
#include "DongVat.h"
#include "Bo.h"
#include "Cuu.h"
#include "De.h"
using namespace std;

//Tất cả động vật đều sinh con => 100% con cái
int main()
{
	NongTrai a;
	a.Nhap();
	a.Keu();
	cout << "\nTong so lit sua: " << a.LitSua() << " lit" << endl;
	a.Tong_MevaCon();
}