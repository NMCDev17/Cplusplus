#include<iostream>
#include<cmath>
using namespace std;

bool Check(int n)
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

void InPhanTu(int n)
{
	cout<<"\nCac so nguyen to nho hon n la:";
	for(int i=1;i<n;i++)
	{
		if(Check(i))
		{
			cout<<i<<" ";
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap vao n=";cin>>n;
	InPhanTu(n);
	return 0;
}
