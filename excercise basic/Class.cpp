#include<iostream>
#include<string>
using namespace std;

class MyClass {
	public:
	string lastname;
	string firstname;
	int NgaySinh;
};

int main(){
	MyClass SinhVien;
	SinhVien.lastname = "Nguyen";
	SinhVien.firstname = "Cuong";
	SinhVien.NgaySinh=17;
	cout<<SinhVien.firstname<<" "<<SinhVien.lastname<<" "<<SinhVien.NgaySinh;
	
return 0;
}
