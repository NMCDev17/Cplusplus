#include<iostream>
#include<cmath>
#define MAX 100
using namespace std;
void NhapMang(int a[],int &n)
{
	while(n<1 || n>100)
	{
		cout<<"\nNhap lai so luong phan tu trong mang thoa man 1<n<100 :";cin>>n;
	}
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

bool KiemTraNgTo(int n)
{
	if(n<2)
	{
		return false;
	}
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return false;
			}
		}
		return true;
	}
}
void XoaPhanTu(int a[],int &n,int i,int j)
{
	for(int k=i;k<n-1;k++) // dich chuyen mang sau khi xoa
	{
		a[k]=a[k+1];
	}
	n--; //Giam so luong phan tu;
}
void ChuyenPhanTuNgToSangMangMoi(int a[],int b[],int &n,int &n1)
{
	int i1=0;
	n1=0;
	for(int i=0;i<n;i++)
	{
		if(KiemTraNgTo(a[i]))
		{
			b[i1]=a[i];
			i1++;
			n1++;
			XoaPhanTu(a,n,i,a[i]);
		}
	}
}
int main()
{
	int a[MAX],b[MAX],n,n1;
	cout<<"Nhap vao so luong phan tu cua mang:";cin>>n;
	NhapMang(a,n);
	cout<<"\nMang vua nhap la:";
	XuatMang(a,n);
	cout<<"\nMang a sau khi tach la:";
	ChuyenPhanTuNgToSangMangMoi(a,b,n,n1);
	XuatMang(a,n);
	cout<<"\nMang b la:";
	XuatMang(b,n1);
}
