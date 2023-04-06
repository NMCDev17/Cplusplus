#include<iostream>
using namespace std;
void NhapMang(int a[],int &n)
{
	while(n<1 || n>100)
	{
		cout<<"Nhap lai so luong phan tu thoa man 1<n<100 :";cin>>n;
	}
	cout<<"\nNhap so luong phan tu thoa man!";
	cout<<"\nBat dau nhap phan tu vao mang:"<<endl;
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
void SapXepMangTangDan(int a[],int &n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main()
{
	int a[100],n;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	cout<<"\nMang vua nhap la:";
	XuatMang(a,n);
	cout<<"\nMang sap sep theo chieu tang dan la:";
	SapXepMangTangDan(a,n);
	XuatMang(a,n);
return 0;
}
