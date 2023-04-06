#include<iostream>
using namespace std;

int main()
{
int h;
cout<<"nhap vao h=";cin>>h;

if(h>0){
	int i,j;
	for(i=1;i<=h;i++){
		for(j=1;j<=i;j++){
				cout<<" * ";
			}	
		cout<<"\n";	
	}
}	
else{
	cout<<"\n nhap lai h.";
}
	
}
