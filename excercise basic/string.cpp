#include<iostream>
#include<string>
using namespace std;

int main(){
	string lastname = "Nguyen ";
	string firstname = "Cuong";
	string myname = lastname + firstname;
	cout<<"Ho ten la:"<<myname;
	string name;
	cout<<"\nnhap vao ho ten cua ban:";
	getline(cin,name);
	cout<<"Ho ten la:"<<name;
return 0;
}
