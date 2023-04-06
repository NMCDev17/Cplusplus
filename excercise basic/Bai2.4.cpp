#include<iostream>
#define MAX	100
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

int Check1(int a[],int &n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{	
			if(a[i]>a[j])
			{				
				return false;
			}
		}
	}
	return true;
}

int Check2(int a[],int &n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{				
				return false;
			}
		}
	}
	return true;
}
void SapXep(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}
void SapXepTang(int a[],int &n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				SapXep(a[i],a[j]);
			}
		}
	}
}

void SapXepGiam(int a[],int &n)
{
	int z;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				SapXep(a[i],a[j]);
			}
		}
	}
}
void SapXepTangCacPhanTuChan(int a[],int &n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]%2==0)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j] && a[j]%2==0)
				{
					SapXep(a[i],a[j]);
				}
			}
		}
	}
}
void SapXepTangCacPhanTuLe(int a[],int &n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]%2!=0)
		{
			for(int j=i+1;j<n;j++)
			{
				if( a[i]>a[j] && a[j]%2!=0 )
				{
					SapXep(a[i],a[j]);
				}
			}
		}
	}
}
void SapXepTangChanGiamLe(int a[],int &n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]%2==0)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j] && a[j]%2==0)
				{
					SapXep(a[i],a[j]);
				}
			}
		}
		else
		{
			for(int j=i+1;j<n;j++)
			{
				if( a[i]<a[j] && a[j]%2!=0 )
				{
					SapXep(a[i],a[j]);
				}
			}
		}	
	}
}
int main()
{
	int a[MAX],n;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	NhapArr(a,n);
	cout<<"\nMang vua nhap la:";
	XuatArr(a,n);
	if(Check1(a,n))
	{
		cout<<"\nMang duoc sap xep theo chieu tang dan!";
		cout<<"\nSap xep lai theo chieu giam dan la:";
		SapXepGiam(a,n);
		XuatArr(a,n);
	}
	else 
	{
		if(Check2(a,n))
		{
			cout<<"\nMang duoc sap xep theo chieu giam dan!";
			cout<<"\nSap xep lai theo chieu tang dan la:";
			SapXepTang(a,n);
			XuatArr(a,n);
		}
		else{
			cout<<"\nMang vua nhap chua duoc sap xep!";
		/*	cout<<"\nSap xep lai theo chieu tang dan la:";
			SapXepTang(a,n);
			XuatArr(a,n);
			cout<<"\nSap xep lai theo chieu giam dan la:";
			SapXepGiam(a,n);
			XuatArr(a,n);  
			cout<<"\nSap xep cac phan tu chan tang dan la:";
			SapXepTangCacPhanTuChan(a,n);	
			XuatArr(a,n);*/
		/*	cout<<"\nSap xep cac phan tu le tang dan:";
			SapXepTangCacPhanTuLe(a,n);
			XuatArr(a,n);*/
			cout<<"\nSap xep tang chan giam le:";
			SapXepTangChanGiamLe(a,n);
			XuatArr(a,n);
		}
	}
}
