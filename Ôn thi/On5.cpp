#include<iostream>
#include<cmath>
using namespace std;
bool Check(int n)
{
	int temp=(int)sqrt(n);
	if(pow(temp,2)==n)
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
	cout<<"\nCac so chinh phuong nho hon n la:";
	for(int i=1;i<n;i++)
	{
		if(Check(i))
		{
			cout<<i<<"  ";
		}
	}
	return 0;
}
