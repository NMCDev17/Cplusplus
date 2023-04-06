#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"nhap vao  so a:";cin>>a;
    cout<<"\nnhap vao so b:";cin>>b;
    int tich=a*b;
    int tam1= abs(a); int tam2=abs(b);
    int r=a%b;
     while(r!=0){
     a=b;
	 b=r;
	 r=a%b;	  	
    }
     cout<<"\nUCLN= "<<tam1<<" and "<<tam2<<" la "<<b;
     cout<<"\nBCNN="<<tich/b;
	getch();
return 0;	
}
