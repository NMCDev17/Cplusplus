#include<iostream>
#include<cstring>
using namespace std;

class Person;
class Hopital;
class BenhNhan;

class Person
{
	char hoten[30];
	int tuoi;
public:
	void Nhap();
	void Xuat();
};

void Person::Nhap()
{
	cout << "Nhap vao ten:"; gets_s(hoten); rewind(stdin);
	cout << "Nhap vao tuoi:"; cin >> tuoi; rewind(stdin);
}

void Person::Xuat()
{
	cout << "Ten:" << hoten << endl;
	cout << "Tuoi:" << tuoi << endl;
}

class Hopital
{
	char tenbv[50];
	char diachi[50];
	Person gd;
	friend class BenhNhan;
	friend void In(BenhNhan*, int);
};

class BenhNhan :public Person
{
	char tiensu[20];
	char chuandoan[20];
	Hopital bv;
public:
	void Nhap();
	void Xuat();
	friend void In(BenhNhan*, int);
};

void BenhNhan::Nhap()
{
	Person::Nhap();
	cout << "Nhap vao tien su:"; gets_s(tiensu); rewind(stdin);
	cout << "Nhap vao chuan doan:"; gets_s(chuandoan); rewind(stdin);
	cout << "Nhap vao ten benh vien:"; gets_s(bv.tenbv); rewind(stdin);
	cout << "Nhap vao dia chi benh vien:"; gets_s(bv.diachi); rewind(stdin);
}

void BenhNhan::Xuat()
{
	Person::Xuat();
	cout << "Tien su:" << tiensu << endl;
	cout << "Chuan doan:" << chuandoan << endl;
	cout << "Benh vien:" << bv.tenbv << endl;
	cout << "Dia chi:" << bv.diachi << endl;
}

void In(BenhNhan* bn, int sl)
{
	for (BenhNhan* i = bn; i < bn + sl; i++)
	{
		if (strcmp(i->bv.tenbv,"Bach Mai") == 0)
		{
			i->BenhNhan::Xuat();
		}
	}
}
int main()
{
	int sl;
	cout << "Nhap vao so luong benh nhan:"; cin >> sl;
	rewind(stdin);
	BenhNhan *bn = new BenhNhan[100];
	for (int i = 0; i < sl; i++)
	{
		cout << "Benh nhan thu:" << i + 1 << endl;
		bn[i].BenhNhan::Nhap();
	}
	cout << endl;
	for (int j = 0; j < sl; j++)
	{
		cout<<"Benh nhan thu:"<<j+1<<endl;
		bn[j].BenhNhan::Xuat();
	}
	In(bn, sl);
	return 0;
}
