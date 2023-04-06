#include<iostream>
using namespace std;

int main(){
	float x,a,b;
	cout<<"tinh gia tri cua bieu thuc ax+b=0";
	cout<<"\n nhap vao a b la:";cin>>a>>b;
	if(a!=0){
		x=-b/a;
		cout<<"\n gia tri cua x la:"<<x;
	}
	else{
	if(b==0){
		cout<<"\nphuong trinh vo so nghiem";
	}
	else{
		cout<<"\n phuong trinh vo nghiem";
	}
}

}
