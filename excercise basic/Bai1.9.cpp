#include<iostream>
using namespace std;

int VeTamGiac(int k,int n)
{
	if(k==0 || k==n)
	{
		return 1;
	}
	else
	{
		return VeTamGiac(k,n-1)+VeTamGiac(k-1,n-1);
	}
}

int main()
{
	int n;
	cout<<"Nhap vao N:";cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int k=0;k<=i;k++)
		{
			VeTamGiac(k,n);
		}
		cout<<endl;
	}
return 0;
}
