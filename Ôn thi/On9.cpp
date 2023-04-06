#include<iostream>
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
	cout<<"Mang vua nhap la:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
float GtriTBCacPhanTuAm(int a[],int n)
{
	int dem=0;
	float avg=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			avg+=a[i];
			dem++;
		}
	}
	if(dem == 0)
	{
		return 0;
	}
	else
	return avg/dem;
}

int main()
{
	int a[100];
	int n;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
	float kq=GtriTBCacPhanTuAm(a,n);
	cout<<"\nGia tri tb cua cac phan tu duong trong mang la:"<<kq;
return 0;
}
