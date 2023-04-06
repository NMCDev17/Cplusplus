#include<iostream>
#include<cstring>
using namespace std;
class NSX;
class MayTinh;
class May;

class NSX
{
protected:
	char tensx[30];
	char diachi[50];
public:
	friend class May;
	friend void IN(MayTinh *, int);
};

class May
{
private:
	char nhanhieu[30];
	NSX x;
	int gia;
public:
	void Nhap();
	void Xuat();
	friend void IN(MayTinh*, int);
	friend void SapXep(MayTinh*, int);
	friend void Xoa_Thong_Tin(MayTinh *, int&);
	friend float TrungBinhGia(MayTinh*, int);
};

void May::Nhap()
{
	cout << "Nhap vao nhan hieu may:"; gets_s(nhanhieu); rewind(stdin);
	cout << "Nhap vao ten NSX:"; gets_s(x.tensx); rewind(stdin);
	cout << "Nhap vao dia chi NSX:"; gets_s(x.diachi); rewind(stdin);
	cout << "Nhap vao gia thanh:"; cin >> gia; rewind(stdin);
}

void May::Xuat()
{
	cout << "Nhan hieu:" << nhanhieu << endl;
	cout << "NSX:" << x.tensx << endl;
	cout << "Dia chi NSX:" << x.diachi << endl;
	cout << "Gia thanh:" << gia << endl;
}

class MayTinh: public May
{
private:
	char tocdo[10];
	char ram[5];
	char rom[10];
public:
	void Nhap();
	void Xuat();
	friend void SapXep(MayTinh*, int);
};

void MayTinh::Nhap()
{
	May::Nhap();
	cout << "Nhap vao toc do:"; gets_s(tocdo); rewind(stdin);
	cout << "Nhap vao ram:"; gets_s(ram); rewind(stdin);
	cout << "Nhap vao rom:"; gets_s(rom); rewind(stdin);
}

void MayTinh::Xuat()
{
	May::Xuat();
	cout << "Toc do:" << tocdo << endl;
	cout << "Ram:" << ram << endl;
	cout << "Rom" << rom << endl;
}

void IN(MayTinh *m, int sl)
{
	for (MayTinh* j = m; j < m + sl; j++)
	{
		if (strcmp(j->x.tensx, "Intel" )== 0)
		{
			j->MayTinh::Xuat();
		}
	}
}

void SapXep(MayTinh* m, int sl)
{
	MayTinh temp;
	for (int i = 0; i < sl-1; i++)
	{
		for (int j = 0; j < sl; j++)
		{
			if (m[i].gia > m[j].gia)
			{
				temp = m[i];
				m[i] = m[j];
				m[j] = temp;
			}
		}
	}
}

void Xoa_Thong_Tin(MayTinh* m, int &sl)
{
	int count = 0;
	for (int i = 0; i < sl-1; i++)
	{
		if (strcmp(m[i].nhanhieu, "Intel") == 0)
		{
			for(int j=i;j<sl;j++)
				m[j]=m[j+1];
		}
		sl--;
	}
}

float TrungBinhGia(MayTinh* m, int sl)
{
	int sum = 0;
	float avg = 0;
	for (int i = 0; i < sl; i++)
	{
		sum += m[i].gia;
	}
	avg = (float)sum / sl;
	return avg;
}
int main()
{
	int sl;
	MayTinh *m= new MayTinh[100];
	cout << "Nhap vao so luong may tinh:"; cin >> sl; rewind(stdin);
	for (MayTinh* i = m; i < m + sl; i++)
	{
		i->MayTinh::Nhap();
	}
	cout << endl;
	IN(m, sl);
	SapXep(m, sl);
	cout << endl;
	for (MayTinh* j = m; j < m + sl; j++)
	{
		j->MayTinh::Xuat();
	}

	/*Xoa_Thong_Tin(m, sl);
	for (MayTinh* z = m; z < m + sl; z++)
	{
		z->MayTinh::Xuat();
	}*/
	float m_avg=TrungBinhGia(m, sl);
	cout << "Trung binh moi may co gia la:" << m_avg;
	return 0;
}