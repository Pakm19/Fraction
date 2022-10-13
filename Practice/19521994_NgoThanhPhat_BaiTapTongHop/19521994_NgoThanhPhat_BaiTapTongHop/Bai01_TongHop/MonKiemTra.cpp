#include "MonKiemTra.h"

MonKiemTra::MonKiemTra()
{

}

void MonKiemTra::Nhap()
{
    MonHoc::Nhap();
    cout << "\nNhap Diem He So 3(Diem kiem tra het mon ?): ";
    cin >> HeSo_3;
}

void MonKiemTra::Xuat()
{
    cout << "\t\tMon Kiem Tra";
    MonHoc::Xuat();
    cout << "Diem He So 3(Diem kiem tra het mon ?): " << HeSo_3 << endl;
}

float MonKiemTra::DiemTongKet()
{
    return (HeSo_1+(HeSo_2 * 2)+(HeSo_3 * 3))/6;
}

MonKiemTra::~MonKiemTra()
{

}

istream& operator>>(istream& is, MonKiemTra& mkt)
{
	cout << "\nNhap Ma So Mon Hoc: ";
	cin.ignore();
	is >> mkt.MaSo_Monhoc;
	cout << "\nNhap Ten Mon Hoc: ";
	is >> mkt.Ten_Monhoc;
	cout << "\nNhap He So Mon Hoc: ";
	is >> mkt.HeSo_Mh;
	cout << "\nNhap He So 1: ";
	is >> mkt.HeSo_1;
	cout << "\nNhap He So 2: ";
	is >> mkt.HeSo_2;
	cout << "\nNhap He So 3 (Diem kiem tra het mon?): ";
	is >> mkt.HeSo_3;
	return is;

}

ostream& operator<<(ostream& os, const MonKiemTra& mkt)
{
	// TODO: insert return statement here
	os << "\nMa So Mon Hoc: " << mkt.MaSo_Monhoc << endl;
	os << "Ten Mon Hoc: " << mkt.Ten_Monhoc << endl;
	os << "He So Mon Hoc: " << mkt.HeSo_Mh << endl;
	os << "He So 1: " << mkt.HeSo_1 << endl;
	os << "He So 2: " << mkt.HeSo_2 << endl;
	os << "He So 3 (Diem kiem tra het mon ?): " << mkt.HeSo_3 << endl;
	return os;

}
