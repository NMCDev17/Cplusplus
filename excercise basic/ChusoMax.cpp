#include<iostream>
using namespace std;

void TimSoLonNhat(int n)
{
	int max=0;
	int chuso=0;
	while(n!=0)
	{
		chuso = n % 10;
		if(chuso > max)
		{
			max = chuso;
		}
		n=n/10;
	}
	cout<<"\nChu so Max la:"<<max;
}

int SoMin(int n,int min[])
{
	int temp=min[0];
	for(int i=1;i<n;i++)
	{
		if(temp > min[i])
		{
			temp=min[i];
		}
	}
	return temp;
}
void TimSoBeNhat(int n)
{
	int min[10],i=0;
	while(n!=0)
	{
		min[i]=n%10;
		n=n/10;
		i++;		
	}
	int kq=SoMin(i,min);
	cout<<"\nSo min la:"<<kq;
}
int main()
{
	int n;
	cout<<"Nhap vao n=";cin>>n;
	TimSoLonNhat(n);
	TimSoBeNhat(n);
	return 0;
}
