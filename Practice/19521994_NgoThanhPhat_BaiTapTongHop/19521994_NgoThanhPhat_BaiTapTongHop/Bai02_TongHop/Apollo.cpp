#include "Apollo.h"

Apollo::Apollo()
{
	
	this->alpha = 10;
	this->n_Nguoi = 0;
}

Apollo::Apollo(int sohieu, string ten)
{
	this->SoHieu_PhiThuyen = sohieu;
	this->Ten_PhiThuyen = ten;
	this->alpha = alpha;
	
}

int Apollo::getn_Nguoi()
{
	srand(time(NULL));
	return 5 + rand() % (20 + 1 - 5);
	//return  rand() % 20 + 5; // [5,20] minN + rand() % (maxN + 1 - minN)
}


float Apollo::NhienLieuTieuThu(int T)
{
	return (alpha+getn_Nguoi()*T) ; //(alpha+N)*T dezo
}


int Apollo::getLoai()
{
	return 1;
}

Apollo::~Apollo()
{

}

istream& operator>>(istream& is, Apollo& ap)
{
	cout << "Nhap So Hieu Phi Thuyen: ";
	is >> ap.SoHieu_PhiThuyen;
	cout << "Nhap Ten Phi Thuyen: ";
	is >> ap.Ten_PhiThuyen;
	cout << "Nhap He So Tieu Thu Nhien Lieu Phi Thuyen: ";
	is >> ap.HeSo_NhienLieu;
	srand(time(NULL));
	ap.n_Nguoi = 5 + rand() % (20 + 1 - 5);

	return is;
	// TODO: insert return statement here
}

ostream& operator<<(ostream& os, const Apollo& ap)
{
	// TODO: insert return statement here
	os << "Loai Phi Thuyen: Apollo" << endl;
	os << "Ten Phi Thuyen: " << ap.Ten_PhiThuyen << endl;
	os << "So Hieu Phi Thuyen: " << ap.SoHieu_PhiThuyen << endl;
	os << "He So Tieu Thu Nhien Lieu: " << ap.HeSo_NhienLieu << endl;
	os << "So Luong Nguoi: " << ap.n_Nguoi << endl;

	return os;

}
