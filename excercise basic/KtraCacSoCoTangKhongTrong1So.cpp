#include<iostream>
using namespace std;

bool KtraTang(int n,int a[])
{
	for(int i=0;i<n;i++)
	{
		if(a[i] < a[i+1])
		{
			return false;
		}
	}
	return true;
}

bool KtraGiam(int n,int a[])
{
	for(int i=0;i<n;i++)
	{
		if(a[i] > a[i+1])
		{
			return false;
		}
	}
	return true;
}
void TachSo(int n)
{
	int chso[10],i=0;
	while(n!=0)
	{
		chso[i]=n%10;
		n/=10;
		i++;
	}
	if(KtraTang(i,chso))
	{
		cout<<"\nCac chu so tang dan!";
	}
	else
	{
		if(KtraGiam(i,chso))
		cout<<"\nCac chu so giam dan!";
		else
		cout<<"\nCac chu so khong duoc sap xep!";
	}
}
int main()
{
	int n;
	cout<<"Nhap vao n=";cin>>n;
	TachSo(n);
	return 0;
}
