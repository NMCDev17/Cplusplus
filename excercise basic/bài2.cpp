#include<iostream>
using namespace std;

int main()
{
	//x la so ga
	//36-x la so cho
	//2*x la so chan ga
	//(36-x)*4 la so chan cho
	int x; 
	for(x=1;x<=36;x++){
	 if((2*x)+(36-x)*4==100){
	 	cout<<"So ga la "<<x;
	 	cout<<"\nSo cho la"<<36-x;
	 	}
	}
	
	return 0;
}
	
	
