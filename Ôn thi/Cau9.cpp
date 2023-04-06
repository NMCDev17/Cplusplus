#include<iostream>
using namespace std;

struct Phanso{
	int tuso;
	int mauso;
}ps[100];

void NhapPhanSo(Phanso ps[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Tu so thu "<<i+1<<":";cin>>ps[i].tuso;
		cout<<"Mau so thu "<<i+1<<":";cin>>ps[i].mauso;
	}
}

void XuatPhanSo(Phanso ps[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<ps[i].tuso<<"/"<<ps[i].mauso<<"\t";
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
		while(a != b)
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

void RutGon1ps(int &a, int &b)
{
	int temp=UCLN(a,b);
	a = a / temp;
	b = b / temp;
}

void RutGonNPhanSo(Phanso ps[],int n)
{
	for(int i=0;i<n;i++)
	{
		RutGon1ps(ps[i].tuso,ps[i].mauso);
	}
}

void TongPhanSo(Phanso ps[],int &n)
{
	int sumtu=0;
	int summau=ps[1].mauso;
	for(int i=0;i<n;i++)
	{
		sumtu+=ps[i].tuso;
	}
	RutGon1ps(sumtu,summau);
	cout<<"\nTong phan so la:"<<sumtu<<"/"<<summau;
}

void TimPhanSoMax(Phanso ps[],int n)
{
	Phanso max[100];
	max[0] = ps[0];
	for(int i=1;i<n;i++)
	{
		if(ps[i].tuso > max[0].tuso)
		{
			max[0] = ps[i];
		}
	}
	cout<<"\nPhan so lon nhat la:"<<max[0].tuso<<"/"<<max[0].mauso;
}
int main()
{
	int n;
	cout<<"Nhap vao so luong phan so :";cin>>n;
	NhapPhanSo(ps,n);
	cout<<"Phan so vua nhap la:";XuatPhanSo(ps,n);
	cout<<"\nRut gon phan so:";RutGonNPhanSo(ps,n);
	XuatPhanSo(ps,n);
	TongPhanSo(ps,n);
	TimPhanSoMax(ps,n);
	return 0;
}
