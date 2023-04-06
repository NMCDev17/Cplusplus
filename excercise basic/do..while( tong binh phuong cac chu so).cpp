#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,i,sum;
	cout<<"nhap vao so nguyen duong n:";
	cin>>n;
	sum=0;
	i=1;	
	if(n>0){	
    	do{
  		sum+=pow(i,2);
 		i++;
    	}	
    	while(i<=n);	
    	cout<<"\ntong cac binh phuong cac chu so la="<<sum;
	}
	else{
		cout<<"\nnhap lai n>0";
	}	
return 0;	
}
