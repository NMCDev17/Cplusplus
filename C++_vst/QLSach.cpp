#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

class Sach;
class Tacgia;
class NXB;

class Tacgia
{
private:
	char tentg[20];
	char diachi[20];
public:
	void Input();
	void Output();
};

void Tacgia::Input()
{
	cout << "Nhap ten tac gia:"; gets_s(tentg);
	cout << "Nhap dia chi:"; gets_s(diachi);
}

void Tacgia::Output()
{
	cout << "Ten tac gia:" << tentg << endl;
	cout << "Dia chi:" << diachi << endl;
}

class NXB
{
private:
	char tennxb[20];
	char diachinxb[20];
public:
	friend class Sach;
	friend void In_Sach(Sach* s, int n);
};

class Sach
{
private:
	char tensach[20];
	Tacgia x;
	NXB y;
public:
	void Input();
	void Output();
	friend void In_Sach(Sach* s, int n);
};

void Sach::Input()
{
	cin.ignore();
	cout << "Nhap vao ten sach:"; gets_s(tensach);
	x.Tacgia::Input();
	cout << "Nhap vao ten NXB:"; gets_s(y.tennxb);
	cout << "Nhao vao dia chi NXB:"; gets_s(y.diachinxb); 
}

void Sach::Output()
{
	cout << "Ten sach::" << tensach << endl;
	x.Tacgia::Output();
	cout << "Nha xuat ban:" << y.tennxb << endl;
	cout << "Dia chi NXB:" << y.diachinxb << endl;
}

void In_Sach(Sach s[100], int n)
{
	int check = 0;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(s[i].y.tennxb, "Thanh nien") == 0)
		{
			s[i].Output();
			check = 1;
		}
	}

	if (check == 0)
		cout << "Khong co sach nao!";
}

int main()
{
	Sach *s = new Sach[100];
	int n;
	cout << "Nhap vao so luong sach:"; cin >> n;
	cout << "\n";
	for (Sach* i = s; i < s + n; i++)
	{
		i->Sach::Input();
	}

	// xuat danh sach sach
	for (Sach* j = s; j < s + n; j++)
	{
		j->Output();
		cout << "\n";
	}

	In_Sach(s, n);
	return 0;
}