#include<iostream>
using namespace std;

bool check(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	
	if(sum == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int n;
	cout<<"Nhap vao n=";cin>>n;
	cout<<"\nCac so hoan hao nho hon n la:";
	for(int i=1;i<n;i++)
	{
		if(check(i))
		{
			cout<<i<<"  ";
		}
	}
	return 0;
}
