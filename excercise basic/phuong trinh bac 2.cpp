#include<iostream>
#include<math.h>
using namespace std;
 int main(){
 float x,a,b,c;
 cout<<"tinh gia tri cua x de ax^2+bx+c=0";
 cout<<"\nnhap vao a b c la:";cin>>a>>b>>c;
    if(a==0){
    	if(b==0&&c==0){
    		cout<<"\nphuong trinh vo so nghiem";	
		}
		else{
			cout<<"\nphuong trinh vo nghiem";	
		}
	}
	else{
		float delta=pow(b,2)-4*a*c;
		if(delta==0){
			x=-b/(2*a);
			cout<<"\nphuong trinh co hai nghiem kep:"<<x;
		}		
		else{
			if(delta>0){
				float x1=(sqrt(delta)+b)/2*a;
				float x2=(sqrt(delta)-b)/2*a;
				cout<<"\nphuong trinh co hai nghiem phan biet x1="<<x1<<" x2="<<x2;
	     	}
	     	else{
	     		cout<<"\nphuong trinh vo nghiem";
			 }
		}
	}
 	
 }
