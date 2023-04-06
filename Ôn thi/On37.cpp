#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;

struct Canbo{
	char macb[10];
	char tencb[50];
	int luong;
}cb[50];

void NhapCanBo(Canbo cb[],int &n)
{
	cout<<"=== Nhap thong tin can bo ===";
	fflush(stdin);
	for(int i=1;i<=n;i++)
	{
		cout<<"\nMa can bo:";gets(cb[i].macb);
		cout<<"\nHo ten can bo:";gets(cb[i].tencb);
		cout<<"\nLuong:";cin>>cb[i].luong;
		fflush(stdin);
	}
}

int LuongTB(Canbo cb[],int n)
{
	int luongtb;
	for(int i=1;i<n;i++)
	{
		luongtb+=cb[i].luong;
	}
	return luongtb/n;
}

void XuatThongTin(Canbo cb[],int &n)
{
	int luongtb=LuongTB(cb,n);
	cout<<left<<setw(10)<<"MaCB"<<left<<setw(20)<<"Ten can bo"<<left<<setw(10)<<"luong"<<left<<setw(10)<<"luongTB";
	for(int i=1;i<=n;i++)
	{
		cout<<"\n"<<left<<setw(10)<<cb[i].macb<<left<<setw(20)<<cb[i].tencb<<left<<setw(10)<<cb[i].luong<<left<<setw(10)<<luongtb;
	}
}

int main()
{
	int n;
	cout<<"Nhap vao so luong can bo:";cin>>n;
	NhapCanBo(cb,n);
	cout<<"=== Danh sach can bo ==="<<endl;
	XuatThongTin(cb,n);
	return 0;
}
