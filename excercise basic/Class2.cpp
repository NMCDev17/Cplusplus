#include<iostream>
#include<string>
using namespace std;

class tinh{
	public:
		int tong(int a , int b);
};
class Myname{
	public:
		string firstname;
		string lastname;
};

int tinh::tong(int a,int b){
	int sum=a+b;
	return sum;
}

int main(){
	int a,b;
	cout<<"nhap vao a va b la:";cin>>a>>b;
	tinh noname;
	cout<<noname.tong(a,b);
	Myname thisinh;
	thisinh.lastname="nguyen";
	thisinh.firstname="cuong";
	cout<<" "<<thisinh.lastname<<" "<<thisinh.firstname;
return 0;
}
