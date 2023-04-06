#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<algorithm>
using namespace std;

class Student{
	public:
		string name,year,address;
		double gpa;
	public:
		Student();
		Student(string , string , string, double );
		friend istream& operator >> (istream &in, Student &a);
		friend ostream& operator << (ostream& out,Student a);
		friend bool operator < (Student a, Student b);
};

Student::Student()
{
	this->name = "";
	this->address = "";
	this->year = "";
	this->gpa = 0;
}

Student::Student(string name, string year, string address, double gpa)
{
	this->name = name;
	this->year = year;
	this->address = address;
	this->gpa = gpa;
}

istream& operator >> (istream& in, Student& a)
{
	cout<<"Nhap vao ten sinh vien: ";getline(in,a.name);
	cout<<"Nhap vao nam sinh: ";in>>a.year;in.ignore();
	cout<<"Nhap vao dia chi: ";getline(in,a.address);
	cout<<"Nhap vao gpa: ";in>>a.gpa;in.ignore();
	return in;
}
ostream& operator << (ostream& out, Student a)
{
	cout<<"Ten sinh vien: "<<a.name<<endl;
	cout<<"Nam sinh: "<<a.year<<endl;
	cout<<"Dia chi: "<<a.address<<endl;
	cout<<"Gpa: "<<fixed<<setprecision(2)<<a.gpa<<endl;
	return out;
}

bool operator < (Student a, Student b)
{
	return a.gpa < b.gpa;
}
int main()
{
	Student a[3];	
	for(int i = 0; i < 3; i++)
	{
		cin>>a[i];
	}
	sort(a,a+3);
	for(int i = 0; i < 3; i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
