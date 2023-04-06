#include<iostream>
#include<cmath>
#define MAX 100
using namespace std;

void NhapMang(int a[],int &n)
{
	while(n<1 || n>100)
	{
		cout<<"Nhap lai so luong phan tu trong mang thoa man 1<n<100 : ";cin>>n;
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
bool KiemTraNgTo(int n)
{
	if(n<2)
	{
		return false;
	}
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return false;
			}
		}
		return true;
	}
}
void InPhanTuNgTo(int a[],int &n)
{
	cout<<"\nCac phan tu ngto trong mang la:";
	for(int i=0;i<n;i++)
	{
		if(KiemTraNgTo(a[i]))
		{
			cout<<a[i]<<"\t";
		}
	}
}
int main()
{
	int a[MAX],n;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	cout<<"\nMang vua nhap la:";
	XuatMang(a,n);
	InPhanTuNgTo(a,n);
return 0;
}
