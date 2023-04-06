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

void PhanTuMax(int a[],int n)
{
	int max = a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<"\nPhan tu Max = "<<max;
}
int main()
{
	int a[MAX],n;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	cout<<"Mang vua nhap la:";XuatMang(a,n);
	PhanTuMax(a,n);
	return 0;
}
