#pragma once
#include <vector>
#include"Tickets.h"
#include"Tickets_full.h"
#include"Tickets_part.h"
class QuanLy
{
private:
	vector<Tickets*>DS_ticket;
public:
	QuanLy();
	void Nhap();
	void Xuat();
	int Tongtien_ve();
	int n_Tickets_part();
	//~QuanLy();
};

