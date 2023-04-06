#include<iostream>
using namespace std;

void NhapMang(int a[],int &n)
{
	while(n<1 || n>100)
	{
		cout<<"\nNhap so luong phan tu trong mang khong thoa man!"<<endl;
		cout<<"Nhap lai so luong phan tu trong khoang 1<n<100 :";cin>>n;
	}
	cout<<"\nNhap so luong phan tu trong mang thoa man!"<<endl;
	cout<<"Bat dau nhap phan tu vao mang:"<<endl;
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

void TimPhanTuMIN(int a[],int n)
{
	int min=a[0];
	int temp=0;
	for(int i=1;i<n;i++)
	{
		if(a[i] < min)
		{
			min=a[i];
			temp=i;
		}
	}
	cout<<"\nPhan tu nho nhat la:"<<min;
	cout<<"\nVi tri cua phan tu la:"<<"a["<<temp<<"]";
}

int main()
{
	int a[100],n;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
	TimPhanTuMIN(a,n);
	return 0;
}
