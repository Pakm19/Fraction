#include "MonHoc.h"

MonHoc::MonHoc()
{
	MaSo_Monhoc = "";
	Ten_Monhoc = "";
	HeSo_Mh = 0;
	HeSo_1 = 0;
	HeSo_2 = 0;
	

}

MonHoc::MonHoc(string MaSo, string Ten,float c, float a , float b )
{
	this->MaSo_Monhoc = MaSo;
	this->Ten_Monhoc = Ten;
	this->HeSo_Mh = c;
	this->HeSo_1 = a;
	this->HeSo_2 = b;
	


}

void MonHoc::setMaSo(string Maso)
{
	this->MaSo_Monhoc = Maso;
}

void MonHoc::setTen(string Ten)
{
	this->Ten_Monhoc = Ten;
}

void MonHoc::setHeSo_Mh(float heso_mh)
{
	this->HeSo_Mh = heso_mh;
}

void MonHoc::setHeSo_1(float heso_1)
{
	this->HeSo_1 = heso_1;
}

void MonHoc::setHeSo_2(float heso_2)
{
	this->HeSo_2 = heso_2;
}

string MonHoc::getMaSo()
{
	return MaSo_Monhoc;
}

string MonHoc::getTen()
{
	return Ten_Monhoc;
}

float MonHoc::getHeSo_Mh()
{
	return HeSo_Mh ;
}

float MonHoc::getHeSo_1()
{
	return HeSo_1;
}

float MonHoc::getHeSo_2()
{
	return HeSo_2;
}

void MonHoc::Nhap()
{
	cout << "\nNhap Ma So Mon Hoc: ";
	cin.ignore();
	getline(cin, MaSo_Monhoc);
	cout << "\nNhap Ten Mon Hoc: ";
	getline(cin, Ten_Monhoc);
	cout << "\nNhap He So Mon Hoc: ";
	cin >> HeSo_Mh;
	cout << "\nNhap He So 1: ";
	cin >> HeSo_1;
	cout << "\nNhap He So 2: ";
	cin >> HeSo_2;
}

void MonHoc::Xuat()
{
	cout << "\nMa So Mon Hoc: " << MaSo_Monhoc << endl;
	cout << "Ten Mon Hoc: "<< Ten_Monhoc << endl;
	cout << "He So Mon Hoc: " << HeSo_Mh << endl;
	cout << "He So 1: "<< HeSo_1 << endl;
	cout << "He So 2: " << HeSo_2 << endl;
}

MonHoc::~MonHoc()
{


}

istream& operator>>(istream& is, MonHoc& mh)
{
	// TODO: insert return statement here
	cout << "\nNhap Ma So Mon Hoc: ";
	cin.ignore();
	is >> mh.MaSo_Monhoc;
	cout << "\nNhap Ten Mon Hoc: ";
	is >> mh.Ten_Monhoc;
	cout << "\nNhap He So Mon Hoc: ";
	is >> mh.HeSo_Mh;
	cout << "\nNhap He So 1: ";
	is >> mh.HeSo_1;
	cout << "\nNhap He So 2: ";
	is >> mh.HeSo_2;
	return is;
}
ostream& operator<<(ostream& os, const MonHoc& mh)
{
	// TODO: insert return statement here
	os << "\nMa So Mon Hoc: " << mh.MaSo_Monhoc << endl;
	os << "Ten Mon Hoc: " << mh.Ten_Monhoc << endl;
	os << "He So Mon Hoc: " << mh.HeSo_Mh << endl;
	os << "He So 1: " << mh.HeSo_1 << endl;
	os << "He So 2: " << mh.HeSo_2 << endl;
	return os;
}
