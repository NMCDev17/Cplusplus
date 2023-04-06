#include<iostream>
using namespace std;


int TimM(int n)
{
	int maxm=0;
	int sum=0;
	for(int i=1;i<n;i++)
	{
		cout<<i;
		sum+=i;
		maxm=i;
		if(sum < n)
		{
			return maxm;
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap vao n=";cin>>n;
	int kq=TimM(n);
	cout<<"\nSo m lon nhat la:"<<kq;
	return 0;
}
