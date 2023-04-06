#include<iostream>
using namespace std;

struct PhanSo
{
	int tuso;
	int mauso;
}ps[100];
void Nhap2PhanSo(PhanSo ps[])
{
	cout<<"Nhap phan so:";
	for(int i=1;i<=2;i++)
	{
		cout<<"\nPhan so "<<i<<" tu so la:";cin>>ps[i].tuso;
		do{
			cout<<"Phan so "<<i<<" mau so (dk !=0) la:";cin>>ps[i].mauso;
		}
		while(ps[i].mauso==0);
	}
}
void Xuat2PhanSo(PhanSo ps[])
{
	for(int i=1;i<=2;i++)
	{
		cout<<ps[i].tuso<<"/"<<ps[i].mauso<<"  ";
	}
}
int UCLN(int a,int b)
{
	if(a==0 || b==0)
	{
		return a;
	}
	else
	{
		while(a!=b)
		{
			if(a>b)
			{
				a=a-b;
			}
			else
			{
				b=b-a;
			}
		}
		return a;
	}
}

int RutGonPhanSo(PhanSo ps[])
{
	for(int i=1;i<=2;i++)
	{
		int temp=UCLN(ps[i].tuso,ps[i].mauso);
		ps[i].tuso=ps[i].tuso / temp;
		ps[i].mauso=ps[i].mauso / temp;
	}
}

float Tong2PhanSo(PhanSo ps[])
{
	int tu=ps[1].tuso * ps[2].mauso+ ps[2].tuso*ps[1].mauso;
	int mau=ps[1].mauso * ps[2].mauso;
	return (float)tu/mau; 
}

float Hieu2PhanSo(PhanSo ps[])
{
	int tu=ps[1].tuso * ps[2].mauso - ps[2].tuso*ps[1].mauso;
	int mau=ps[1].mauso * ps[2].mauso;
	return (float)tu/mau; 
}
float Tich2PhanSo(PhanSo ps[])
{
	int tu=ps[1].tuso * ps[2].tuso;
	int mau=ps[1].mauso * ps[2].mauso;
	return (float)tu/mau; 
}

float ThuongHaiPhanSo(PhanSo ps[])
{
	int tu=ps[1].tuso*ps[2].mauso;
	int mau=ps[1].mauso*ps[2].tuso;
	return (float)tu/mau;
}
int main()
{
	Nhap2PhanSo(ps);
	cout<<"\nPhan so vua nhap la:";
	Xuat2PhanSo(ps);
	cout<<"\nPhan so sau khi rut gon la:";
	RutGonPhanSo(ps);
	Xuat2PhanSo(ps);
	float sum=Tong2PhanSo(ps);
	cout<<"\n"<<ps[1].tuso<<"/"<<ps[1].mauso<<" + "<<ps[2].tuso<<"/"<<ps[2].mauso<<" = "<<sum;
	float hieu=Hieu2PhanSo(ps);
	cout<<"\n"<<ps[1].tuso<<"/"<<ps[1].mauso<<" - "<<ps[2].tuso<<"/"<<ps[2].mauso<<" = "<<hieu;
	float tich=Tich2PhanSo(ps);
	cout<<"\n"<<ps[1].tuso<<"/"<<ps[1].mauso<<" * "<<ps[2].tuso<<"/"<<ps[2].mauso<<" = "<<tich;
	float thuong=ThuongHaiPhanSo(ps);
	cout<<"\n"<<ps[1].tuso<<"/"<<ps[1].mauso<<" / "<<ps[2].tuso<<"/"<<ps[2].mauso<<" = "<<thuong;
	return 0;
}
