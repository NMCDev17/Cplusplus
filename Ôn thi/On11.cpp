#include<iostream>
#define MAX 100
using namespace std;
void NhapMang(int a[],int &n)
{
	while(n<1 || n>100)
	{
		cout<<"Nhap lai so luong phan tu trong mang thoa man 1<n<100 :";cin>>n;
	}
	cout<<"\nBat dau nhap phan tu trong mang:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]:";cin>>a[i];
	}
}
void XuatMang(int a[],int &n)
{
	cout<<"\nMang vua nhap la:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

bool KiemTraSoHoanHao(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum == n)
	{
		return 1;
	}
	else
	return 0;
}
float TBCacSoHoanHao(int a[],int n)
{
	int sum=0,dem=0;
	for(int i=0;i<n;i++)
	{
		if(KiemTraSoHoanHao(a[i]))
		{
			sum+=a[i];
			dem++;
		}
	}
	if(dem == 0)
	{
		return 0;
	}
	else
	return sum/dem;
}
int main()
{
	int a[MAX];
	int n;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
	float kq=TBCacSoHoanHao(a,n);
	cout<<"\nGtri TB cac phan tu hoan hao trong mang="<<kq;
}
