#include<iostream>
#include<math.h>
using namespace std;

void check(int &a,int &b,int &c)
{
	if(a==b&&a!=c||b==c&&b!=a||c==a&&c!=b)
	{
		cout<<"\nTam giac nay la tam giac can!";
	}
	else{
		 if(a==b&&a==c&&b==c)
		{
		cout<<"\nTam giac nay la tam giac deu!";		
		}
		else if(pow(a,2)+pow(b,2)==pow(c,2)||pow(b,2)+pow(c,2)==pow(a,2)||pow(a,2)+pow(c,2)==pow(b,2))
		{
			cout<<"\nTam gia nay la tam giac vuong!";
		}
	}	
}
int main()
{
	int a,b,c;
	cout<<"Nhap vao canh a:";cin>>a;
	cout<<"\nNhap vao canh b:";cin>>b;
	cout<<"\nNhap vao canh c:";cin>>c;
	if(a+b<=c||a+c<=b||b+c<=a){
	cout<<"\nTam giac khong hop le:";
    }
    check(a,b,c);
return 0;	
}
