#include "MonThi.h"

MonThi::MonThi()
{

}

void MonThi::Nhap()
{
    MonHoc::Nhap();
    cout << "\nNhap Diem Thi Het Mon:  ";
    cin >> DiemThi_Tongmon;
}

void MonThi::Xuat()
{
    cout << "\t\tMon Thi";
    MonHoc::Xuat();
    cout << "Diem Thi Het Mon: " << DiemThi_Tongmon << endl;
    cout << "\n";
}

float MonThi::DTB_KT()
{

    return (HeSo_1 +(HeSo_2*2)) / 3;
}

float MonThi::DiemTongKet()
{
    return (DTB_KT() + DiemThi_Tongmon) / 2;
}

MonThi::~MonThi()
{

}

istream& operator>>(istream& is, MonThi& mt)
{
    // TODO: insert return statement here
	cout << "\nNhap Ma So Mon Hoc: ";
	cin.ignore();
	is >> mt.MaSo_Monhoc;
	cout << "\nNhap Ten Mon Hoc: ";
	is >> mt.Ten_Monhoc;
	cout << "\nNhap He So Mon Hoc: ";
	is >> mt.HeSo_Mh;
	cout << "\nNhap He So 1: ";
	is >> mt.HeSo_1;
	cout << "\nNhap He So 2: ";
	is >> mt.HeSo_2;
	cout << "\nNhap Diem Thi Het Mon: ";
	is >> mt.DiemThi_Tongmon;

	return is;

}

ostream& operator<<(ostream& os, const MonThi& mt)
{
	// TODO: insert return statement here
	os << "\nMa So Mon Hoc: " << mt.MaSo_Monhoc << endl;
	os << "Ten Mon Hoc: " << mt.Ten_Monhoc << endl;
	os << "He So Mon Hoc: " << mt.HeSo_Mh << endl;
	os << "He So 1: " << mt.HeSo_1 << endl;
	os << "He So 2: " << mt.HeSo_2 << endl;
	os << "Diem Thi Het Mon: " << mt.DiemThi_Tongmon << endl;

	return os;
}
