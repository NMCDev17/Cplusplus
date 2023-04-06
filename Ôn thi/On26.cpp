#include<iostream>
#define MAX 100
using namespace std;

void NhapMang(int a[],int &n)
{
	while(n<1 || n>100)
	{
		cout<<"\nNhap lai so luong phan tu trong mang thoa man 1<n<100 :";cin>>n;		
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

void ThemPhanTu(int a[],int &n,int x,int k)
{
	if(k>100)
	{
		return;
	}
	if(k<=0)
	{
		k=0;
	}
	if(k>=n)
	{
		k=n;
	}
	for(int i=k;i<=n;i++)
	{
		a[k+1]=a[k];
	}
	a[k]=x;
	n++;
}

int main()
{
	int a[MAX],n,x,k;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	cout<<"\nMang vua nhap la:";
	XuatMang(a,n);
	cout<<"\nNhap vap phan tu muon them x=";cin>>x;
	cout<<"\nVi tri muon them k=";cin>>k;
	cout<<"\nMang sau khi them la:";
	ThemPhanTu(a,n,x,k);
	XuatMang(a,n);
return 0;
}

