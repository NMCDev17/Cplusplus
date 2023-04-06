#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int TimSoDao(int n);
bool KiemtraDoiXung(int n);
bool KiemTraChinhPhuong(int n);
bool KiemTraNTo(int n);
bool KiemTraTang(int n,int a[]);
bool KiemTraGiam(int n,int a[]);
void KiemTraSapXep(int n);
int SoMax(int n, int a[]);
int SoMin(int n, int a[]);
void TimSoLonVaBe(int n);
int main()
{
	int n;
	do{
		cout<<"Nhap vao n>0 n=";cin>>n;
	}
	while(n<0);
	if(KiemtraDoiXung(n))
	{
		cout<<"La so doi xung!";
	}
	else
	{
		cout<<"Khong la so doi xung!";
	}
	if(KiemTraChinhPhuong(n))
	{
		cout<<"\nLa so chinh phuong!";
	}
	else
	{
		cout<<"\nkhong la so chinh phuong!";
	}
	if(KiemTraNTo(n))
	{
		cout<<"\nLa so nguyen to!";
	}
	else
	{
		cout<<"\nKhong la so nguyen to!";
	}
	KiemTraSapXep(n);
	TimSoLonVaBe(n);
return 0;	
}

int TimSoDao(int n)
{
	int sp=0;
	int ndao=0;
	while(n!=0)
	{
		sp=n%10;
		ndao=(ndao*10)+sp;
		n/=10;
	}
	return ndao;
}

bool KiemtraDoiXung(int n)
{
	if(n == TimSoDao(n))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool KiemTraChinhPhuong(int n)
{
	int temp=sqrt(n);
	if(n == pow(temp,2))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool KiemTraNTo(int n)
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
bool KiemTraTang(int n,int a[])
{
	for(int j=0;j<n;j++)
	{
		if(a[j] < a[j+1])
		{
			return false;
		}
	}
	return true;
}
bool KiemTraGiam(int n,int a[])
{
	for(int j=0;j<n;j++)
	{
		if(a[j] > a[j+1])
		{
			return false;
		}
	}
	return true;
}

void KiemTraSapXep(int n)
{
	int i=0,chuso=0;
	int luuchu[20];
	while(n!=0)
	{
		chuso=n%10;
		luuchu[i]=chuso;
		n=n/10;
		i++;	
	}
	if(KiemTraTang(i,luuchu))
	{
		cout<<"\nCac so duoc sap tang dan!";	
	}	
	else
	{
		if(KiemTraGiam(i,luuchu))
		{
			cout<<"\nCac so duoc sap giam dan!";
		}
		else
		{
			cout<<"\nCac so chua duoc sap!";
		}
	}
}
int SoMax(int n, int a[])
{
	int temp=a[0];
	for(int j=1;j<n;j++)
	{
		if(a[j] > temp)
		{
			temp = a[j];
		}
	}
	return temp;
}
int SoMin(int n,int a[])
{
		int temp=a[0];
	for(int j=1;j<n;j++)
	{
		if(a[j] < temp)
		{
			temp = a[j];
		}
	}
	return temp;
}
void TimSoLonVaBe(int n)
{
	int i=0,chuso=0;
	int luuchu[20];
	while(n!=0)
	{
		chuso=n%10;
		luuchu[i]=chuso;
		n=n/10;
		i++;	
	}
	int kq1=SoMax(i,luuchu);
	cout<<"\nChu so lon nhat la:"<<kq1;
	int kq2=SoMin(i,luuchu);
	cout<<"\nChu so nho nhat la:"<<kq2;	
}
