#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
int a,b,r;
cout<<"nhap vao a la:";cin>>a;
cout<<"\nnhap vao b la:";cin>>b;
int tam1=a; int tam2=b;
a=abs(a); b=abs(b);
r=a%b;

while (r!=0){
	a=b;
	b=r;
	r=a%b;
	}
cout<<"\nUCLN cua "<<tam1<<" va"<<tam2<<" la "<<b;
getch();	
	
}
