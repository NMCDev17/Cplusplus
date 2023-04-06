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
	{
		cout<<a[i]<<"\t";
	}
}

void DemVaInPhanTuChan(int a[],int &n)
{
	int count=0;
	cout<<"\nCac phan tu chan trong mang la:";
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			count++;
			cout<<a[i]<<"\t";
		}
	}
	cout<<"\n\tSo luong phan tu chan trong mang la:"<<count;
}

void DemVaInPhanTuLe(int a[],int &n)
{
	int count=0;
	cout<<"\nCac phan tu le trong mang la:";
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			cout<<a[i]<<"\t";
			count++;
		}
	}
	cout<<"\n\tSo luong phan tu Le trong mang la:"<<count;
}
int KtraNto(int x)
{
	if(x<2)
	{
		return 0;
	}
	else{
		for(int i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			{
				return 0;
			}
		}
	}
	return 1;
}
void DemVainPhanTuNguyenTo(int a[],int &n)
{
	int count=0;
	cout<<"\nCac phan tu nguyen to trong mang la:";
	for(int i=0;i<n;i++)
	{
		if(KtraNto(a[i]))
		{
			cout<<a[i]<<" ";
			count++;
		}
	}
	cout<<"\n\tSo luong phan tu Nguyen To trong mang la:"<<count;
}

int main()
{
	int a[MAX],n;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	cout<<"\nMang vua nhap la:";
	XuatMang(a,n);
	DemVaInPhanTuChan(a,n);
	DemVaInPhanTuLe(a,n);
	DemVainPhanTuNguyenTo(a,n);
return 0;
}





