#include<iostream>
#define MAX 100
using namespace std;

void NhapArr(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]";cin>>a[i];
	}
}
void XuatArr(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

void ThemPhanTu(int a[],int &n,int &i,int &j )
{
	if(i>MAX)
	{
		cout<<"\nMang full khong the them!";
	}
	if(i<=0) //Them vao vi tri dau
	{
		i=0;
	}
	if(i>=n) // them vao vi tri cuoi
	{
		i=n;
	}
	for(int k=n;k>i;k--) // tao them ô trông de chen gia tri cua j tai vi tri i
	{
		a[k]=a[k-1];
	}
	a[i]=j;
	n++;
}
void XoaPhanTu(int a[],int &n,int &i,int &j)
{
	if(n<=0)
	{
		cout<<"\nMang rong khong the xoa nua!";
	}
	if(i<=0)
	{
		i=0; // xoa phan tu tai vi tri cuoi dau;
	}
	if(i>=n)
	{
		i=n; //xoa phan tu tai vi tri cuoi;
	}
	for(int k=i;k<n-1;k++) // dich chuyen mang sau khi xoa
	{
		a[k]=a[k+1];
	}
	n--; //Giam so luong phan tu;
}

int main()
{
	int a[MAX],n;
	cout<<"Nhap vao so luong phan tu:";cin>>n;
	NhapArr(a,n);
	cout<<"\nMang vua nhap la:";
	XuatArr(a,n);
	int i,j;
	cout<<"\nNhap phan tu can them:";cin>>j;
	cout<<"\nVi tri muon them:";cin>>i;
	cout<<"\nMang sau khi Them la:"<<endl;
	ThemPhanTu(a,n,i,j);
	XuatArr(a,n);
	cout<<"\nMang sau khi xoa la:"<<endl;
	XoaPhanTu(a,n,i,j);
	XuatArr(a,n);
}
