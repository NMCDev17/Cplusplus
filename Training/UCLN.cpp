#include<iostream>
using namespace std;

int UCLN(int a,int b)
{
	while(b > 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	int a,b;cin>>a>>b;
	int result = UCLN(a,b);
	cout<<result<<endl;
	return 0;
}
