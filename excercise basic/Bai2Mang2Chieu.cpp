#include<iostream>
using namespace std;
void Nhap_Mang(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"a["<<i<<"]"<<"["<<j<<"]";
			cin>>a[i][j];
		}
	}
}

void Xuat_Mang(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j];
			cout<<" ";
		}
		cout<<"\n\t";
	}
}
int TongDuongcheoChinh(int a[][100],int &n,int &m)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
				cout<<"\nVi tri phan tu cheo tren duong cheo chinh la:a["<<i<<"]"<<"["<<j<<"]";
			}
		}
	}
return sum;
}

int check(int a[][100],int &n,int &m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]!=a[j][i])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int a[100][100];
	int m,n;
	cout<<"Nhap vao so hang:";cin>>n;
	cout<<"\nNhap vao so cot:";cin>>m;
	Nhap_Mang(a,n,m);
	cout<<"\nMang nhap la:";
	Xuat_Mang(a,n,m);
	cout<<"\nTong cac phan tu tren duong cheo chinh la:"<<TongDuongcheoChinh(a,n,m);
	if(check(a,n,m))
	{
		cout<<"\nCac phan tu trong mang doi xung!";
	}
	else
	{
		cout<<"\nCac phan tu trong mang khong doi xung!";
	}
	return 0;
}
	
