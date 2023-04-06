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
int main()
{
	int a[MAX],n;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	InArr(a,n);
	cout<<"\nMang vua nhap la:";
	OutArr(a,n);
	return 0;
}
