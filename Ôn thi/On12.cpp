#include<iostream>
#include<cmath>
#define MAX 100
using namespace std;
void NhapMang(int a[],int &n)
{
	while(n<1 || n>100)
	{
		cout<<"Nhap so luong phan tu khong thoa man!"<<endl;
		cout<<"Nhap lai so luong phan tu trong mang thoa man 1<n<100 :";cin>>n;
	}
	if(n>1 && n<100)
	{
		cout<<"Nhap so luong phan tu thoa man!";
		cout<<"\nBat dau nhap phan tu trong mang:"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<"a["<<i<<"]:";cin>>a[i];
		}
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
bool KiemTraChinhPhuong(int n)
{
	int temp=sqrt(n);
	if(pow(temp,2)==n)
	{
		return true;
	}
return false;	
}
float TBSoChinhPhuong(int a[],int n)
{
	int sum=0;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(KiemTraChinhPhuong(a[i]))
		{
			sum+=a[i];
			dem++;
		}
	}
	if(dem==0)
	{
		return 0;
	}
	else
	return (float)sum/dem;
}
int main()
{
	int a[MAX];
	int n;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);	
	float avg = TBSoChinhPhuong(a,n);
	cout<<"\nGia tri TB cac phan tu chinh phuong trong mang la="<<avg;
}
