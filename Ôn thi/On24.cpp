#include<iostream>
#define MAX 100
using namespace std;

void NhapMang(int a[],int &n)
{
	while(n<1 || n>100)
	{
		cout<<"Nhap lai so luong phan tu trong mang thoa man 1<n<100 :";cin>>n;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]:";cin>>a[i];
	}
}

void XuatMang(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

void DemPhanTuAmVaDuong(int a[],int n)
{
	int dema=0,demd=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			dema++;
		}
		if(a[i]>0)
		{
			demd++;
		}
	}
	cout<<"\nSo luong phan tu am trong mang la:"<<dema;
	cout<<"\nSo luong phan tu duong trong mang la:"<<demd;
}
int main()
{
	int a[MAX],n;
	cout<<"Nhap so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	cout<<"\nMang vua nhap la:";
	XuatMang(a,n);
	DemPhanTuAmVaDuong(a,n);
	return 0;
}

