#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Nhap vao so nguyen duong n:";cin>>n;
	int sum=0;
	while(n!=0)
	{
		int i=n%10;
		n=n/10;
		sum=sum+i;
	}
	cout<<"\nTong cac chu so co trong n la:"<<sum;
	
	return 0;
}
	
