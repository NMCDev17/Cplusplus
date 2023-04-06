#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class TacGia
{
	char ten[20];
	char diachi[50];
public:
	void Nhap();
	void Xuat();
};

void TacGia::Nhap()
{
	cout << "Nhap vao ten tac gia:"; gets_s(ten); rewind(stdin);
	cout << "Nhap vao dia chi tac gia:"; gets_s(diachi); rewind(stdin);
}

void TacGia::Xuat()
{
	cout << "Tac gia:" << ten << endl;
	cout << "Dia chi:" << diachi << endl;
}

class NXB
{
	char tennxb[20];
	char diachi[50];
public:
	void Nhap();
	void Xuat();
};

void NXB::Nhap()
{
	cout << "Nhap ten NXB:"; gets_s(tennxb); rewind(stdin);
	cout << "Nhap vao dia chi NXB:"; gets_s(diachi); rewind(stdin);
}

void NXB::Xuat()
{
	cout << "NXB:" << tennxb << endl;
	cout << "Dia chi NXB:" << diachi << endl;
}
class Book
{
	char ts[20];
	TacGia tg;
	NXB xb;
public:
	void Nhap();
	void Xuat();
};

void Book::Nhap()
{
	cout << "Nhap vao ten sach:"; gets_s(ts); rewind(stdin);
	tg.TacGia::Nhap();
	xb.NXB::Nhap();
}

void Book::Xuat()
{
	cout << "Ten Sach:" << ts << endl;
	tg.TacGia::Xuat();
	xb.NXB::Xuat();
}

class Phieu
{
	char maph[10];
	char ngay[10];
	Book b[100];
	int sl;
public:
	void Nhap();
	void Xuat();
};

void Phieu::Nhap()
{
	cout << "Nhap vao Ma Phieu:"; gets_s(maph); rewind(stdin);
	cout << "Nhap ngay:"; gets_s(ngay); rewind(stdin);
	cout << "Nhap vao so luong sach:"; cin >> sl; rewind(stdin);
	int temp = 1;
	for (Book* i = b; i < b + sl; i++)
	{
		cout << "Nhap sach thu: " << temp << endl;
		i->Nhap();
		temp++;
	}
}

void Phieu::Xuat()
{
	cout << "PHIEU MUA BAN SACH" << endl;
	cout << "Ma phieu:" << left << setw(3) <<" "<< maph << left << setw(10) << " " << "Ngay:" << left << setw(3)<<" " << ngay << endl;
	int temp = 1;
	for (Book* i = b; i < b + sl; i++)
	{
		cout << "Sach thu:" << temp << endl;
		i->Xuat();
		temp++;
	}
}
int main()
{
	Phieu p;
	p.Nhap();
	p.Xuat();
	return 0;
}