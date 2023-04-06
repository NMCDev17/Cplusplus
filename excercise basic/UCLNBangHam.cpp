#include<iostream>
using namespace std;

void Nhap(int &x, int &y){
	cout<<"Nhap vao x va y la:";cin>>x>>y;
	}
	
int UCLN(int x, int y){
	int r;
	r=x%y;
	while (r!=0){
     x=y; 
     y=r%y;
	 r=x;
	}
return x;
}

int main(){
	int x,y;
	Nhap(x,y);
	UCLN(x,y);
	cout<<"UCLN cua "<<x<<" va "<<y<<" la:"<<UCLN(x,y);
}
