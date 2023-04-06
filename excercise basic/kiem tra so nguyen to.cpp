#include<iostream>
#include<math.h>
using namespace std;

int main(){
int n,i;
cout<<"nhap vao so nguyen n:";cin>>n;
   if(n<2){
       cout<<n<<" khong la so nguyen to!"<<endl;
    }	
    else{
    	for(i=2; i<=sqrt(n);i++){
		if(n%i==0){
			cout<<n<<" khong la so nguyen to!"<<endl;
		     return 0;
			}
		}
		 cout<<n<<" la so nguyen to!"<<endl;
    } 
	
return 0;	
}
