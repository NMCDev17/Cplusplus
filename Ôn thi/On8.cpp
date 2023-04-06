#include<iostream>
#define MAX 100
using namespace std;

void InArr(int a[],int &n)
{
	while(n<0 || n>100)
	{
		cout<<"Nhap lai so luong phan tu trong mang thoa man 1<n<100 :";cin>>n;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]:";cin>>a[i];		
	}
}

void OutArr(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

float GtriTBCacPhanTuAm(int a[],int n)
{
	float avg=0;int sum=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			sum+=a[i];
			count++;
		}
	}
	if(count == 0)
	{
		return 0;
	}
	avg=(float)sum/count;
	return avg;
}
int main()
{
	int a[MAX],n;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	InArr(a,n);
	cout<<"\nMang vua nhap la:";
	OutArr(a,n);
	float avg=GtriTBCacPhanTuAm(a,n);
	cout<<"\nGia tri trung binh cac phan tu am trong mang la:"<<avg;
	return 0;
}
