#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"nhap vao n=";cin>>n;
	int sum=0;
	
	for(int i=1;i<=n;i++){
		if(i%2==0)
		sum=sum+i;
		}
	cout<<"tong="<<sum;
return 0;	
}

