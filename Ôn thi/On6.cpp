#include<iostream>
using namespace std;

void UCLNandBCNN(int a, int b)
{
	int product=a*b;
	if(a==0||b==0)
	{
		cout<<"BCNN la:"<<a;
		cout<<"\nUCLN la:"<<a;
	}
	else
	{
		while(a!=b)
		{
			if(a>b)
			{
				a=a-b;
			}
			else
			{
				b=b-a;
			}
		}
		cout<<"\nBCNN la:"<<product/a;
		cout<<"\nUCNN la:"<<b;
	}	
}
int main()
{
	int a,b;
	cout<<"Nhap vao a=";cin>>a;
	cout<<"\nNhap vao b=";cin>>b;
	UCLNandBCNN(a,b);
	return 0;
}
