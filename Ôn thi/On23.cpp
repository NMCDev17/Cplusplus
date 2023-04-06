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

void TimViTriPhanTuAm(int a[],int n)
{
	int temp,max;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]<0)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<0 && a[i]<a[j])
				{
					temp=j;
				}
			}
		}		
	}
	cout<<"\nVtri phan tu am xuat hien la:a["<<temp<<"]";
}
int main()
{
	int a[MAX],n;
	cout<<"Nhap so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	cout<<"\nMang vua nhap la:";
	XuatMang(a,n);
	TimViTriPhanTuAm(a,n);
return 0;
}
