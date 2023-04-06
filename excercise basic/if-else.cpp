#include<iostream>
using namespace std;

int main()
{
	int thang;
	int nam;
	cout<<"nhap vao thang:";cin>>thang;
	cout<<"\nnhap vao nam:";cin>>nam;
	if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
		cout<<"\nthang "<<thang<<" nam "<<nam<<" co 31 ngay";
	}
	else{
		if(thang==4||thang==6||thang==11){
			cout<<"\nthang "<<thang<<" nam "<<nam<<" co 30 ngay";
		}
		else{
			if(thang=2){
				if(nam%400==0||(nam%4==0&&nam%100!=0)){
				cout<<"\nthang "<<thang<<" nam "<<nam<<" co 29 ngay ";
		     	}   
		     	else{
				cout<<"thang "<<thang<<" nam "<<nam<<" co 28 ngay";
		     	}
	    	}
		}
	}
}

	
	

