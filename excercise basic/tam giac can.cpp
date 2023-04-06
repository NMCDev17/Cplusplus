#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int h;
cout<<"nhap vao h=";cin>>h;

if(h>0){
	int i,j;
	for(i=1;i<=h;i++){
		for(j=1;j<=2*h;j++){
			if(abs(h-j)<=(i-1)){
				cout<<" * ";
			}
	        else{
	        	cout<<"   ";
			}
		}	
		cout<<"\n";	
	}
}	
else{
	cout<<"\n nhap lai h.";
}
	
}
