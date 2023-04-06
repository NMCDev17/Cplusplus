#include<iostream>
#define MAX 100
using namespace std;

void NhapMang(int a[],int b[],int &n)
{
	while(n<1 || n>100)
	{
		cout<<"\nNhap lai so luong phan tu trong mang thoa man 1<n<100 :";cin>>n;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]:";cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		b[i]=1;
	}
}

void XuatMang(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

int DemPhanTu(int a[],int n,int x)
{
	int count=1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			count++;
		}
	}
	return count;
}
void TimPhanTuXuatHienNhieuNhat(int a[],int b[],int n)
{
	int max=0,temp,count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(count > max)
		{
			max = count;
			temp=a[i];
		}
		count=0;
	}
	cout<<"\nphan tu xuat hien nhieu nhat la:"<<temp<<" voi so lan xuat hien la:"<<max;
}
int main()
{
	int a[MAX],b[MAX],n;
	cout<<"Nhap vao so luong phan tu cua mang:";cin>>n;
	NhapMang(a,b,n);
	cout<<"\nMang vua nhap la:";
	XuatMang(a,n);
	TimPhanTuXuatHienNhieuNhat(a,b,n);
}

