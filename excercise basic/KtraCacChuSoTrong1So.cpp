#include<iostream>
using namespace std;

bool Check(int n,int a[])
{
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
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
	if(Check(i,chso))
	{
		cout<<"\nCo toan chu so le!";
	}
	else
	{
		cout<<"\nCo toan chu so chan!";
	}
}
int main()
{
	int n;
	cout<<"Nhap vao so nguyen n=";cin>>n;
	TachSo(n);
	return 0;
}
