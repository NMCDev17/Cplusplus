#include<iostream>
using namespace std;


int main()
{
	int thang;
	cout<<"nhap vao thang:";cin>>thang;
	int nam;
	cout<<"\nnhap vao nam:";cin>>nam;
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:{
			cout<<"\nthang "<<thang<<" co 31 ngay";
			break;
		}
		case 4:
		case 6:
		case 11:{
			cout<<"\nthan"<<thang<<"co 30 ngay";
			break;
		}
		case 2:{
			if(nam%400==0||(nam%4==0&&nam%100!=0)){
				cout<<"\nthang"<<thang<<" nam"<<nam<<" nam nhuan co 29 ngay";
			}
			else{
				cout<<"\nthang"<<thang<<"nam "<<nam<<" nam khong nhuan co 28 ngay";
			} 
			break;
		}
	}
		defualt:
		cout<<"\nkhong co du lieu";
	return 0;
}
	

