#include<iostream>
#define MAX 100
using namespace std;

void Nhap_Mang(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]:";cin>>a[i];
	}
}

void Xuat_Mang(int a[],int &n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
}

int Kiem_Tra(int a[],int &n,int &x)
{	
	for(int i=0;i<n;i++)
	{
		if(a[i]==x){
		  	return true;
			break;
		}
	}
	return false;
}
void Dem_In(int a[],int &n,int x)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			cout<<"\n\tVi tri xuat hien cua x la:"<<i;
			dem++;
		}
	}
	cout<<"\n\tSo lan X xuat hien la:"<<dem;
}
int main()
{
	int a[MAX],n,x;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	cout<<"\nNhap vao x:";cin>>x;
	Nhap_Mang(a,n);
	cout<<"\nMang vua nhap la:";
	Xuat_Mang(a,n);
	if(Kiem_Tra(a,n,x)){
		cout<<"\n\tX xuat hien trong mang";
	}
	else{
		cout<<"\n\tX khong xuat hien trong mang";
	}
	Dem_In(a,n,x);
return 0;
}
	
