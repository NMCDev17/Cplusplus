#include<iostream>
using namespace std;
int TongCapSoCong(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}
int TongCapSoCong2(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=((i*10)+2);
	}
	return sum;
}
float Tong1PhanN(int n)
{
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=1.0/i;
	}
	return sum;
}
int NGiaiThua(int n)
{
	int giaithua=1;
	for(int i=1;i<=n;i++)
	{
		giaithua*=i;
	}
	return giaithua;
}
int TongGiaiThua(int n)
{
	int sum=0,giaithua=1;
	for(int i=1;i<=n;i++)
	{
		giaithua*=i;
		sum+=giaithua;
	}
	return sum;
}
float Tong1PhanNLe(int n)
{
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			sum+=1.0/i;
		}
	}
	return sum;
}
int main()
{
	int n;
	do
	{
		cout<<"\nNhap n>0 n=";cin>>n;
	}while(n<0);
	int a = TongCapSoCong(n);
	cout<<"\nTong Cap so cong tu 1 ---->"<<n<<"la:"<<a<<endl;
	int b = TongCapSoCong2(n);
	cout<<"Tong Cap so cong tu 12 den "<<n<<"2 la:"<<b<<endl;
	float c = Tong1PhanN(n);
	cout<<"Tong tu  1 +1/2 + ---> 1/"<<n<<"la:"<<c<<endl;
	int d = NGiaiThua(n);
	cout<<n<<"!="<<d<<endl;
	int e = TongGiaiThua(n);
	cout<<"Tong 1! -----> "<<n<<"! la:"<<e<<endl;
	float f = Tong1PhanNLe(n);
	cout<<"Tong 1/n la:"<<f;
}
