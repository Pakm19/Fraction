#include "Shieldeto.h"

Shieldeto::Shieldeto()
{
	this->alpha = 20;
	this->Bankinh_R = 0;
}

Shieldeto::Shieldeto(int sohieu, string ten)
{
	this->SoHieu_PhiThuyen = sohieu;
	this->Ten_PhiThuyen = ten;
	this->alpha = alpha;
}

float Shieldeto::getBanKinh()
{
	srand(time(NULL));
	return 5 + rand() % (30 + 1 - 5); // [5,30]  minN + rand() % (maxN + 1 - minN)
}

float Shieldeto::NhienLieuTieuThu(int T)
{
	return (alpha*T)+(2*getBanKinh()*T) ; //:: alpha*T + 2*R*T dezo.

}

int Shieldeto::getLoai()
{
	return 3;
}

Shieldeto::~Shieldeto()
{

}

istream& operator>>(istream& is, Shieldeto& Shi)
{
	// TODO: insert return statement here
	cout << "Nhap So Hieu Phi Thuyen: ";
	is >> Shi.SoHieu_PhiThuyen;
	cout << "Nhap Ten Phi Thuyen: ";
	is >> Shi.Ten_PhiThuyen;
	cin.ignore();
	cout << "Nhap He So Tieu Thu Nhien Lieu Phi Thuyen: ";
	is >> Shi.HeSo_NhienLieu;

	srand(time(NULL));
	Shi.Bankinh_R = 5 + rand() % (30 + 1 - 5);

	return is;

}

ostream& operator<<(ostream& os, const Shieldeto& Shi)
{
	// TODO: insert return statement here
	os << "Loai Phi Thuyen: Shieldeto" << endl;
	os << "Ten Phi Thuyen: " << Shi.Ten_PhiThuyen << endl;
	os << "So Hieu Phi Thuyen: " << Shi.SoHieu_PhiThuyen << endl;
	os << "He So Tieu Thu Nhien Lieu: " << Shi.HeSo_NhienLieu << endl;
	os << "Ban Kinh R: " << Shi.Bankinh_R << endl;

	return os;
}
