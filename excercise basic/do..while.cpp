#include<iostream>
using namespace std;

int main()
{
int n,dem;
cout<<"nhap vao so nguyen duong n:";cin>>n;
dem=0;

do{
	n/=10;
	dem++;
}	
while(n>0);
cout<<"\nso vua nhap co "<<dem<<" chu so";
		
}
