#include<iostream>
#include<cmath>
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
int DemPhanTuNhoHonK(int a[],int n,int k)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<k && KiemTraNgTo(a[i])== true)
		{
			dem++;
		}
	}
	if(dem==0)
	{
		return 0;
	}
	else
	{
		return dem;
	}
}
int main()
{
	int a[MAX],n,k;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	cout<<"\nMang vua nhap la:";
	XuatMang(a,n);
	cout<<"\nNhap vao so nguyen k:";cin>>k;
	int kq=DemPhanTuNhoHonK(a,n,k);
	cout<<"\nCo "<<kq<<" so ngto nho hon k!";
	return 0;
}
