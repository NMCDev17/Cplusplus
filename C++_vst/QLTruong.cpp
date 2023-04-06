#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class Khoa 
{
protected:
	string makhoa;
	string tenkhoa;
public:
	void Nhap();
	void Xuat();
	string getmakhoa();
	string gettenkhoa();
	friend void In(Truong* ,int );
};

void Khoa::Nhap()
{
	cout << "Nhap vao ma khoa:"; getline(cin,makhoa); rewind(stdin);
	cout << "Nhap vao ten khoa:"; getline(cin,tenkhoa); rewind(stdin);
}

void Khoa::Xuat()
{
	cout << "Ma khoa:" << makhoa << endl;
	cout << "Ten khoa:" << tenkhoa << endl;
}

string Khoa::getmakhoa()
{
	return this->makhoa;
}

string Khoa::gettenkhoa()
{
	return this->tenkhoa;
}
class Ban {
protected:
	string maban;
	string tenban;
public:
	void Nhap();
	void Xuat();
	friend void In(Truong*,int );
};

void Ban::Nhap()
{
	cout << "Nhap vao ma ban:"; getline(cin,maban); rewind(stdin);
	cout << "Nhap vao ten ban:"; getline(cin,tenban); rewind(stdin);
}

void Ban::Xuat()
{
	cout << "Ma ban:" << maban<<endl;
	cout << "Ten ban:" << tenban<<endl;
}

class Truong : public Khoa,Ban
{
private:
	int slk;
	Khoa x[100];
	int slb;
	Ban y[100];
public:
	void Nhap();
	void Xuat();
	int getslk();
	int getslb();
	friend void In(Truong*,int );
};

void Truong::Nhap()
{
	cout << "Nhap vao so luong khoa:"; cin >> slk; rewind(stdin);
	for (int i = 0; i < slk; i++)
	{
		x[i].Nhap();
	}

	cout << "Nhap vao so luong ban:"; cin >> slb; rewind(stdin);
	for (int j = 0; j < slb; j++)
	{
		y[j].Nhap();
	}
}

void Truong::Xuat()
{
	for (int i = 0; i < slk; i++)
	{
		cout << "Khoa thu " << i + 1<<endl;
		x[i].Khoa::Xuat();
	}

	for (int j = 0; j < slb; j++)
	{
		cout << "Ban thu " << j + 1<<endl;
		y[j].Ban::Xuat();
	}
}

int Truong::getslk()
{
	return slk;
}

int Truong::getslb()
{
	return slb;
}

void In(Truong *a,int n)
{
	for (Truong *z = a; z < a+n; z++)
	{
		int check = 0;
		for (int i = 0; i < z->getslk(); i++)
		{
			if (z->x[i].gettenkhoa() == "CNTT")
			{
				check = 1;
			}
			if (z->getslb() >= 3 || check == 1)
			{
				z->Truong::Xuat();
			}
		}
	}
}

int main()
{
	Truong *sch = new Truong[100];
	int slt;
	cout << "Nhap vao so luong truong:"; cin >> slt; rewind(stdin);
	for (int tn = 0; tn < slt; tn++)
	{
		cout << "\nTruong thu:" << tn + 1 << endl;
		sch[tn].Truong::Nhap();
	}

	for (int tx = 0; tx < slt; tx++)
	{
		cout << "\nTruong thu:" << tx + 1 << endl;
		sch[tx].Truong::Xuat();
	}
	In(sch,slt);
	return 0;
}
