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

void TachMang(int a[],int &n,int b[],int &nb,int c[],int &nc)
{
	int ib,ic=0;
	nb=0;nc=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			b[ib]=a[i];
			ib++;
			nb++;
		}
		else
		{
			c[ic]=a[i];
			nc++;
			ic++;
		}
	}
}
int main()
{
	int a[MAX],b[MAX],c[MAX],n,nb,nc;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	cout<<"\nMang vua nhap la:";
	XuatMang(a,n);
	cout<<"\nMang b la:";
	TachMang(a,n,b,nb,c,nc);
	XuatMang(b,nb);
	cout<<"\nMang c la:";
	XuatMang(c,nc);
return 0;
}
