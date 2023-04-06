#include<iostream>
using namespace std;

int main(){
	int n,x;
	cout<<"nhap vao n:";cin>>n;
	cout<<"\nnhap vao x:";cin>>x;
	int tong=0;
	
	for(int i=1;i<=n;i++){
		if(i%2!=0)
		tong=tong+(x*10+i);
		}
		cout<<"tong="<<tong;
		return 0;
}
		
	
