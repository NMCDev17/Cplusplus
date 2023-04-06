#include<iostream>
using namespace std;

int main(){
	int nam;
	cout<<"nhap vao nam la:";cin>>nam;
	if(nam%400==0||(nam%4==0)&&nam%100!=0){
		cout<<"\n Nam "<<nam<<" la nam nhuan";
	}
	else{
		cout<<" Nam "<<nam<<" khong la nam nhuan";
	}
	
}
