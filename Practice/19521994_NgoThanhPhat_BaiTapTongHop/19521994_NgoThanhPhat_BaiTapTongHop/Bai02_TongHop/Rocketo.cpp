#include "Rocketo.h"

Rocketo::Rocketo()
{
	SoHieu_PhiThuyen = 0;
	Ten_PhiThuyen = "";
	HeSo_NhienLieu = 0;
	alpha = 30;
	HoaLuc_M = 0;
}

Rocketo::Rocketo(int sohieu, string ten)
{
this->SoHieu_PhiThuyen = sohieu;
this->Ten_PhiThuyen = ten;
this->alpha = alpha;
}

float Rocketo::getHoaLuc()
{
	srand(time(NULL));
	return 2 + rand() % (5 + 1 - 2); // [2,5]  minN + rand() % (maxN + 1 - minN)
}

float Rocketo::NhienLieuTieuThu(int T)
{
	return (alpha*3600) + (getHoaLuc()*getHoaLuc()*T); // alpha*T + M*M*T dezo
}
int Rocketo::getLoai()
{
	return 2;
}
Rocketo::~Rocketo()
{

}

istream& operator>>(istream& is, Rocketo& rk)
{
	// TODO: insert return statement here
	cout << "Nhap So Hieu Phi Thuyen: ";
	is >> rk.SoHieu_PhiThuyen;
	cout << "Nhap Ten Phi Thuyen: ";
	is >> rk.Ten_PhiThuyen;
	cout << "Nhap He So Tieu Thu Nhien Lieu Phi Thuyen: ";
	is >> rk.HeSo_NhienLieu;
	srand(time(NULL));
	rk.HoaLuc_M = 2 + rand() % (5 + 1 - 2);

	return is;
}

ostream& operator<<(ostream& os, const Rocketo& rk)
{
	// TODO: insert return statement here
	os << "Loai Phi Thuyen: Rocketo" << endl;
	os << "Ten Phi Thuyen: " << rk.Ten_PhiThuyen << endl;
	os << "So Hieu Phi Thuyen: " << rk.SoHieu_PhiThuyen << endl;
	os << "He So Tieu Thu Nhien Lieu: " << rk.HeSo_NhienLieu << endl;
	os << "Hoa Luc M: " << rk.HoaLuc_M << endl;

	return os;
}
