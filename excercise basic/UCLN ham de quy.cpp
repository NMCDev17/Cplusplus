#include<iostream>
using namespace std;

int UCLN(int a,int b)
{
	if(a==b)
		return a;
	if(a<b)
		return UCLN(a,b-a);
	else 
		return UCLN(b,a-b);
}
  	
  	
int main()
{
	int a,b;
   cout<<"nhap vao a va b:";cin>>a>>b;
   cout<<"UCLN:"<<UCLN(a,b);
}
