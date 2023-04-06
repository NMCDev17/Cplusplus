#include<iostream>
#include<math.h>
using namespace std;

int check(int &n);

int main()
{
	int n;
	cout<<"Nhap vao so nguyen n:";cin>>n;
	if(n<2)
	{
		cout<<"\nSo "<<n<<" khong la so nguyen to!";
	}
	else
	{
		if(n==2)
		{
			cout<<"\nSo "<<n<<" la so nguyen to!";
		}
		check(n);
	}
	return 0;
}
int check(int &n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cout<<n<<" khong la so nguyen to"<<endl;
			return 0;
		}
	}
	cout<<n<<" la so nguyen to!"<<endl;
	return 1;
}
