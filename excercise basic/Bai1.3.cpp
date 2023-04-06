#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,b,c;
	float x;
	cout<<"Nhap vao gia tri cua a:";cin>>a;
	cout<<"\nNhap vao gia tri cua b:";cin>>b;
	cout<<"\nNhap vao gia tri cua c:";cin>>c;
	float delta=0;
	delta=pow(b,2)-4*a*c;
	if(a==0)
	{
		if(b==0&&c==0)
		{
			cout<<"\nPhuong trinh vo so nghiem!";
		}
		if(b==0&&c!=0)
		{
			cout<<"\nPhuong trinh vo nghiem!";
		}
		else
		{
			x=(float)-c/b;
			cout<<"\nGia tri cua bieu thuc la:"<<x;
		}
	}
	else {
		if(delta>0){
			float x1=(sqrt(delta)+b)/2*a;
			float x2=(sqrt(delta)-b)/2*a;
			cout<<"\nGia tri cua x1="<<x1;
			cout<<"\nGia tri cua x2="<<x2;	
		}
		else{
			if(delta=0)
			{
				x=(float)-b/2*a;
				cout<<"\nPhuong trinh co 2 nghiem kep x1=x1="<<x;
			}
			else{
				cout<<"\nPhuong trinh vo nghiem!";
			}
		}
	}
return 0;
}
