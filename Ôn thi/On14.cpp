#include<iostream>
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
float TinhTBCacPhanTuLeChiaHetCho5(int a[],int n)
{
	int sum=0;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%5==0 && a[i]%2!=0)
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
	return (float)sum/dem;
}
int main()
{
	int a[MAX],n;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
	float avg=TinhTBCacPhanTuLeChiaHetCho5(a,n);
	cout<<"\nGia tri TB cac phan tu thoa man la="<<avg;
return 0;
}
