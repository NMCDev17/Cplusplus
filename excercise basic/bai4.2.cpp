#include<iostream>
#include<stdio.h>
using namespace std;

struct hocsinh
{
	char myname[30];
	float toan;
	float van;
	float avg;
};
struct lophoc
{
	char tenlop[30];
	hocsinh hs[50];
	int siso;
};
void NhapThongTin(lophoc &s)
{
	fflush(stdin);
	for(int i=1;i<=s.siso;i++)
	{
		cout<<"My name:";cin.getline(s.hs[i].myname,29);
		cout<<"\nDiem van:";cin>>s.hs[i].van;
		cout<<"\nDiem toan:";cin>>s.hs[i].toan;
		fflush(stdin);
    }
}


void XuatThongTin(lophoc &s)
{
	for(int i=1;i<=s.siso;i++)
	{
		s.hs[i].avg=(s.hs[i].toan+s.hs[i].van)/2;
		cout<<"\nMy name:"<<"\t\t"<<"Van"<<"\t"<<"Toan"<<"\t"<<"TB";
		cout<<"\n"<<s.hs[i].myname<<"\t"<<s.hs[i].van<<"\t"<<s.hs[i].toan<<"\t"<<s.hs[i].avg;
	}
}


int main()
{
	lophoc s;
	cout<<"Nhap vao si so lop hoc:";cin>>s.siso;
	NhapThongTin(s);
	XuatThongTin(s);

}
