#include<iostream>
using namespace std;

int main()
{
	int n,dem;
	dem=0;
	cout<<"nhap vao n:";cin>>n;
	
	if(n<0){
		n*=-1;
	}
    int i =2;
   while(n!=1){
   	 
   	if(n%i==0){
   		cout<<i;
   		if(n!=i){
   		cout<<"x"<<endl;
		   }
   		else{
		    cout<<i;
   	    	}
   		n/=i;
   	   }
   	    else{
	      i++;
        	}
        dem++;
   	}
	cout<<"so lan lap "<<dem;
return 0;	
}
