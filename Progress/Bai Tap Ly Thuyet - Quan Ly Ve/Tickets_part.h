#pragma once
#include "Tickets.h"
class Tickets_part : public Tickets
{
private:
	int Soluong_trochoi;

public:
	void Nhap();
	void Xuat();
	int Getloai();
	int Tongtien();
	int GetSolong_trochoi();

};

