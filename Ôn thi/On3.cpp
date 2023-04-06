#include<iostream>
#include<cmath>
using namespace std;

bool check(int n)
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
int main()
{
	int n;
	cout<<"Nhap vao n:";cin>>n;
	cout<<"\nCac so nguyen to nho hon n la:";
	for(int i=1;i<n;i++)
	{
		if(check(i))
		{
			cout<<i<<"  ";
		}
	}
	return 0;
}
