#include<iostream>
#include<iomanip>
using namespace std;
struct HocSinh
{
	char myname[30];
	float van;
	float toan;
	float avg;
};

void NhapThongTin(HocSinh &s)
{
	cout<<"My name:";cin.getline(s.myname,29);
	cout<<"\nDiem van:";cin>>s.van;
	cout<<"\nDiem toan:";cin>>s.toan;
}

void TinhTB(HocSinh &s)
{
	s.avg=(s.toan+s.van)/2;
	cout<<"\nDiem trung binh la:"<<s.avg;
}

void XuatThongTin(HocSinh &s)
{
	s.avg=(s.toan+s.van)/2;
	cout<<"\n"<<left<<setw(20)<<"My name:"<<left<<setw(10)<<"Van"<<left<<setw(10)<<"Toan"<<left<<setw(10)<<"TB";
	cout<<"\n"<<left<<setw(20)<<s.myname<<left<<setw(10)<<s.van<<left<<setw(10)<<s.toan<<left<<setw(10)<<s.avg;

}


int main()
{
	HocSinh s;
	NhapThongTin(s);
	XuatThongTin(s);
	TinhTB(s);
return 0;
}
	
