#include<iostream>
#define MAX 100
using namespace std;

void InPut_Array(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]";cin>>a[i];
	}
}

void OutPut_Array(int a[],int &n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
}

int Check1(int a[],int &n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			return false;
		}
	}	
	return true;
}

int Check2(int a[],int &n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1])
		{
			return false;
		}
	}
	return true;
}

void Convert1(int a[],int &n)
{
	int z;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j]){
				z=a[i];
				a[i]=a[j];
				a[j]=z;
			}
		}
	}
}

void Convert2(int a[],int &n)
{
	int z;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				z=a[i];
				a[i]=a[j];
				a[j]=z;
			}
		}
	}
}

int main()
{
	int a[MAX],n;
	cout<<"Nhap vao so luong phan tu cua mang:";cin>>n;
	InPut_Array(a,n);
	cout<<"\nMang vua nhap la:";
	OutPut_Array(a,n);
	if(Check1(a,n)){
		cout<<"\nMang vua nhap tang dan!";
	}
	else{
		if(Check2(a,n)){
			cout<<"\nMang vua nhap giam dan!";
		}
		else{
			cout<<"\nMang vua nhap chua duoc sap xep!";
		}
	}
	cout<<"\nMang duoc sap xep theo chieu tang dan la:";
	Convert1(a,n);
	OutPut_Array(a,n);
	cout<<"\nMang duoc sap xep theo chieu giam dan la:";
 	Convert2(a,n);
	OutPut_Array(a,n);
	
return 0;
}

