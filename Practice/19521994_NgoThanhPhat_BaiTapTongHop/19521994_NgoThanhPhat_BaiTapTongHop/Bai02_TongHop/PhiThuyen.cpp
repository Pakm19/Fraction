#include "PhiThuyen.h"

PhiThuyen::PhiThuyen()
{
	SoHieu_PhiThuyen = 0;
	Ten_PhiThuyen = "";
	HeSo_NhienLieu = 0;
	alpha = 0;
}

PhiThuyen::PhiThuyen(int sohieu, string ten,  int heso, int alp)
{
	this->SoHieu_PhiThuyen = sohieu;
	this->Ten_PhiThuyen = ten;
	this->HeSo_NhienLieu = heso;
	this->alpha = alp;
}

/*void PhiThuyen::Nhap()
{
	cout << "\nNhap So Hieu Phi Thuyen: ";
	cin >> SoHieu_PhiThuyen;
	cin.ignore();
	cout << "Nhap Ten Phi Thuyen: ";
	getline(cin, Ten_PhiThuyen);
	cout << "Nhap He So Tieu Thu Nhien Lieu Phi Thuyen: ";
	cin >> HeSo_NhienLieu;
}

void PhiThuyen::Xuat()
{
	cout << "\nSo Hieu Phi Thuyen: " << SoHieu_PhiThuyen << endl;
	cout << "\nTen Phi Thuyen: " << Ten_PhiThuyen << endl;
	cout << "\nHe So Nhien Lieu Phi Thuyen: " << HeSo_NhienLieu << endl;
}*/

void PhiThuyen::setSoHieu(int sohieu)
{
	this->SoHieu_PhiThuyen = sohieu;
}

void PhiThuyen::setTen(string ten)
{
	this->Ten_PhiThuyen = ten;
}

void PhiThuyen::setHeSo(int heso)
{
	this->HeSo_NhienLieu = heso;
}

void PhiThuyen::setalpha(int alp)
{
	this->alpha = alp;
}

int PhiThuyen::getSoHieu()
{
	return SoHieu_PhiThuyen;
}

string PhiThuyen::getTen()
{
	return Ten_PhiThuyen;
}

int PhiThuyen::getHeSo()
{
	return HeSo_NhienLieu;
}

int PhiThuyen::getalpha()
{
	return alpha;
}

PhiThuyen::~PhiThuyen()
{

}

istream& operator>>(istream& is, PhiThuyen& pt)
{
	// TODO: insert return statement here

	cout << "Nhap So Hieu Phi Thuyen: ";
	is >> pt.SoHieu_PhiThuyen;
	cout << "Nhap Ten Phi Thuyen: ";
	is >> pt.Ten_PhiThuyen;
	cout << "Nhap He So Tieu Thu Nhien Lieu Phi Thuyen: ";
	is >> pt.HeSo_NhienLieu;

	return is;

}

ostream& operator<<(ostream& os, const PhiThuyen& pt)
{
	// TODO: insert return statement here
	os << "Ten Phi Thuyen: " << pt.Ten_PhiThuyen << endl;
	os << "So Hieu Phi Thuyen: " << pt.SoHieu_PhiThuyen << endl;
	os << "He So Tieu Thu Nhien Lieu: " << pt.HeSo_NhienLieu << endl;

	return os;
}
