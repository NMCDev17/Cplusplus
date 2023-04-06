#include<iostream>
#include<math.h>
#define MAX 100
using namespace std;

void NhapMang(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]";cin>>a[i];
	}
}

void XuatMang(int a[],int &n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}

int Count(int a[],int &n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if((int)sqrt(a[i])*(int)sqrt(a[i])==a[i])
		{
			count++;
			cout<<"\nSo chinh phuong trong mang la:"<<a[i];
		}
	}
return count;
}

int main()
{
	int a[MAX],n;
	cout<<"Mang co so luong phan tu la:";cin>>n;
	NhapMang(a,n);
	cout<<"\nMang vua nhap la:";
	XuatMang(a,n);
	cout<<"\nTong cong co:"<<Count(a,n)<<" --->So chinh phuong xuat hien trong mang!";
return 0;
}
