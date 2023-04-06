#include<iostream>
using namespace std;

int TongCacUoc(int n);

int main()
{
	int n;
	cout<<"Nhap vao n:";cin>>n;
	cout<<"\nTong cac uoc cua "<<n<<" la:"<<TongCacUoc(n);
return 0;
}

int TongCacUoc(int n)
{
	int sum=0;
	cout<<"\nCac uoc cua "<<n<<" la:";
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
			cout<<i<<"\t";
		}
	}
	return sum;
}
