#include<iostream>
#define MAX 100
using namespace std;

void NhapMang(int a[],int &n)
{
	while(n<1 || n>100)
	{
		cout<<"Nhap lai so luong phan tu thoa man 1<n<100 :";cin>>n;
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
void TimViTriCuoi(int a[], int &n, int x)
{
	int temp;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			temp=i;
		}
	}
	cout<<"\nVi tri cuoi cung cua "<<x<<" xuat hien trong mang la:a["<<temp<<"]";
}
int main()
{
	int a[MAX],n,x;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	cout<<"\nMang vua nhap la:";
	XuatMang(a,n);
	cout<<"\nNhap vao x:";cin>>x;
	TimViTriCuoi(a,n,x);
return 0;
}
