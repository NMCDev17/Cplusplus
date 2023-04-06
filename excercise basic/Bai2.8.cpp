#include<iostream>
#define MAX 100
using namespace std; 
void NhapMang2Chieu(int a[][100],int &n,int &m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"a["<<i<<"]"<<"["<<j<<"]:";cin>>a[i][j];
		}
	}
}

void XuatMang2Chieu(int a[][100],int &n,int &m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}
}
void SapXep(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}
void SapXepDongTangDan(int a[][100],int &n,int &m)
{
	for(int i=0;i<n;i++)
	{		
		for(int j=0;j<m-1;j++)
		{
			for(int h=j+1;h<m;h++)

				if(a[i][j]>a[i][h])
				{
					SapXep(a[i][j],a[i][h]);
				}	
		}
		cout<<"\n";
	}
}

void SapXepTheoCot(int a[][100],int &n,int &m)
{
	for(int i=0;i<n-1;i++)
	{
		for(int h=i+1;h<n;h++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i][j]>a[h][j])
				{
					SapXep(a[i][j],a[h][j]);
				}
			}
		}	
		cout<<"\n";	
	}
}
int main()
{
	int a[MAX][100],n,m;
	cout<<"Nhap vao so dong cua mang:";cin>>n;
	cout<<"\nNhap vao so cot cua mang:";cin>>m;
	NhapMang2Chieu(a,n,m);
	cout<<"\nMang vua nhap la:"<<endl;
	XuatMang2Chieu(a,n,m);
/*	cout<<"\nSap xep dong theo thu tu tang dan la:";
	SapXepDongTangDan(a,n,m);
	XuatMang2Chieu(a,n,m);*/
	cout<<"\nSap xep cot theo thu tu tang dan la:";
	SapXepTheoCot(a,n,m);
	XuatMang2Chieu(a,n,m);
}
