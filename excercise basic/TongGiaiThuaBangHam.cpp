#include<iostream>
using namespace std;

int GiaiThua(int n){
	int gthua=1;
	int s=0;
	for(int i=1;i<=n;i++){
		gthua*=i;
		s+=gthua;
	}
	return s;
}

int main(){
	int n;
	cout<<"Nhap vao n:";cin>>n;
	if(n<0){
		cout<<"Nhap Lai n>0"<<endl;
	}
	else{
	  int kq=GiaiThua(n);
	  cout<<"Tong tu 1! den "<<n<<"! la:"<<kq;
	}
}
