#include<iostream>
using namespace std;

void TimX(int a,int b,float &x)
{
	if(a==0)
	{
		if(b==0)
		{
			cout<<"\nPhuong Trinh vo so nghiem!";
		}
		else if(b!=0)
		{
			cout<<"\nPhuong trinh vo nghiem!";
		}
	}
	else{
		x=(float)-b/a;
		cout<<"\nGia tri can tim la:"<<x;
	}
}
				
int main()
{
	int a,b;
	float x;
	cout<<"Nhap vao a:";cin>>a;
	cout<<"\nNhap vao b:";cin>>b;
	TimX(a,b,x);
return 0;
}
	
