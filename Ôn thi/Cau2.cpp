#include<iostream>
using namespace std;

int Tong(int n);

int main()
{
	int n;
	cout<<"Nhap vao n=";cin>>n;
	int sum=Tong(n);
	cout<<"\nTong 1+3+5+...+(2n-1)="<<sum;
}

int Tong(int n)
{
	int sum=0;
	for(int i=1;i<=(2*n-1);i++)
	{
		if(i%2!=0)
		{
			sum+=i;
		}
	}
	return sum;
}
