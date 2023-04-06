#include<iostream>
using namespace std;

int main(){
	int n,k,i;
	cout<<"nhap vao so tu nhien n";cin>>n;
	cout<<"\nnhap vao so tu nhien k:";cin>>k;
	int sum=0;
	
	for(i=1;i<=n;i++){
		if(i%k==0){
			sum=sum+i;
		}	
	}
	cout<<"\ntong cac so tu nhien nho hon n chia het cho k la="<<sum;
	
	
	return 0;
}
