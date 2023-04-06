#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cout<<"nhap vao so tu nhie n:";cin>>n;
	if(n<0){
		cout<<"\n vui long nhap lai n";
	}
    else{
    	cout<<"so chan la:"<<endl;
    		for(i=0;i<n;i=i+2){
	    	cout<<i<<" ";
        	} 
	     cout<<"\nso le la"<<endl;
    	for(i=1;i<n;i=i+2){
	    	cout<<i<<" ";
            }
	}
return 0;	
}
