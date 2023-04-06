#include<iostream>
using namespace std;

double Tong(int n)
{
	double sum=1;
	for(int i=1;i<=n;i++)
	{
		sum+=(double)1.0/(2*i+1);
	}
	return sum;
}
int main()
{
	int n;
	cout<<"Nhap vao n=";cin>>n;
	double m_sum = Tong(n);
	cout<<"\nTong = "<<m_sum;
	return 0;
}
