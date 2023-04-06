#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cstring>
using namespace std;

struct Sinhvien
{
	char masv[10];
	char tensv[20];
	float avg;
}sv[100];

void NhapThongTin(Sinhvien sv[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Masv:";gets(sv[i].masv);fflush(stdin);
		cout<<"Tensv:";gets(sv[i].tensv);fflush(stdin);
		cout<<"DiemTB:";cin>>sv[i].avg;fflush(stdin);
	}
}

void XuatThongTin(Sinhvien sv[],int &n)
{
	cout<<"+----------+--------------------+----------+"<<endl;
	cout<<"|"<<left<<setw(10)<<"Masv"<<"|"<<left<<setw(20)<<"TenSv"<<"|"<<left<<setw(10)<<"DiemTB"<<"|"<<endl;
	cout<<"+----------+--------------------+----------+"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"|"<<left<<setw(10)<<sv[i].masv<<"|"<<left<<setw(20)<<sv[i].tensv<<"|"<<left<<setw(10)<<sv[i].avg<<"|"<<endl;
	}
	cout<<"+----------+--------------------+----------+"<<endl;
}

int DemSinhVienDatHocBong(Sinhvien sv[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(sv[i].avg > 8)
		{
			count++;
		}
	}
	return count;
}

void TimSinhVienCoDiemCaoNhat(Sinhvien sv[],int n)
{
	Sinhvien max[100];
	max[0]=sv[0];
	int nmax=1,temp,h=0;
	for(int i=1;i<n;i++)
	{
		if(sv[i].avg>max[0].avg)
		{
			max[0]=sv[i];
			temp=i;
		}
	}
	
	for(int j=temp+1;j<n;j++)
	{
		if(sv[j].avg == max[0].avg)
		{
			nmax++;
			h++;
			max[h]=sv[j];
		}
	}
	XuatThongTin(max,nmax);
}
int main()
{
	int n;
	cout<<"Nhap vao so luong sinh vien:";cin>>n;fflush(stdin);
	cout<<"====== Nhap thong tin sinh vien ======"<<endl;
	NhapThongTin(sv,n);
	cout<<"====== Danh sach sinh vien ======"<<endl;
	XuatThongTin(sv,n);
	int count = DemSinhVienDatHocBong(sv,n);
	cout<<"So sinh vien dat hoc bong la:"<<count<<endl;
	cout<<"Sinh vien dat diem cao nhat la:"<<endl;
	TimSinhVienCoDiemCaoNhat(sv,n);
	return 0;
}
