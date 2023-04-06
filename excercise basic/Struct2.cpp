#include<iomanip>
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

struct sinhvien
{
	char hoten[50];
	char gioitinh[10];
	int tuoi;
	float diemtk,diemly,diemhoa,diemtoan;
}sv[100];

void NhapThongTin(sinhvien sv[],int &n);
void DiemTB(sinhvien sv[],int &n);
void XuatThongTin(sinhvien sv[],int &n);
void SvCoDiemMax(sinhvien sv[],int n);
void DemSV(sinhvien sv[],int &n);
void SapXep(sinhvien sv[], int &n);

int main()
{
	int n;
	cout<<"Nhap vao so luong sinh vien:";cin>>n;
	NhapThongTin(sv,n);
	DiemTB(sv,n);
	XuatThongTin(sv,n);
	SvCoDiemMax(sv,n);
	DemSV(sv,n);
return 0;
}

void NhapThongTin(sinhvien sv[],int &n)
{
	cout<<"\n==========Nhap thong tin sinh vien==========";
	for(int i=1;i<=n;i++)
	{
		fflush(stdin);
		cout<<"\nHo ten sinh vien thu:"<<i<<" la:";gets(sv[i].hoten);
		cout<<"\nGioi tinh :";gets(sv[i].gioitinh);
		cout<<"\nTuoi:";cin>>sv[i].tuoi;
		cout<<"\nDiem ly cua sv thu "<<i<<" la:";cin>>sv[i].diemly;
		cout<<"\nDiem toan cua sv thu "<<i<<" la:";cin>>sv[i].diemtoan;	
		cout<<"\nDiem hoa cua sv thu "<<i<<" la:";cin>>sv[i].diemhoa;
	}
}
void DiemTB(sinhvien sv[],int &n)
{
	for(int i=1;i<=n;i++)
	{
		sv[i].diemtk=(sv[i].diemtoan+sv[i].diemly+sv[i].diemhoa)/3;
	}
}
void XuatThongTin(sinhvien sv[],int &n)
{
	cout<<"\t\t========Danh sach sinh vien la=========";
	cout<<"\n"<<left<<setw(20)<<"Ho ten sinh vien"<<left<<setw(10)<<"Gioi tinh"<<left<<setw(10)<<"Tuoi"<<left<<setw(10)
	<<"Diem ly"<<left<<setw(10)<<"Diem toan"<<left<<setw(10)<<"Diem hoa"<<left<<setw(10)<<"DiemTB";
	
	for(int i=1;i<=n;i++)
	{
		cout<<"\n"<<left<<setw(20)<<sv[i].hoten<<left<<setw(10)<<sv[i].gioitinh<<left<<setw(10)<<sv[i].tuoi<<left<<setw(10)
		<<sv[i].diemly<<left<<setw(10)<<sv[i].diemtoan<<left<<setw(10)<<sv[i].diemhoa<<left<<setw(10)<<sv[i].diemtk;
	}
	
}
void SvCoDiemMax(sinhvien a[],int n)
{
    float max=a[1].diemtk;
    char hs[100]="\0";
    for (int i=2;i<=n;i++)
    { 
		if (max<a[i].diemtk)
   		{
       	 	max=a[i].diemtk;
       		strcpy(hs,sv[i].hoten);
        }
   	}
    cout<<"\nsinh vien co diem cao nhat la: "<<hs<<" voi diem la:"<<max;
}

void DemSV(sinhvien sv[],int &n)
{
int demkha=0,demtb=0,demgioi=0,demyeu=0;
	for(int i=1;i<=n;i++)
	{
		sv[i].diemtk=(sv[i].diemtoan+sv[i].diemly+sv[i].diemhoa)/3;
		if(sv[i].diemtk >= 8.0){
			demgioi++;
		}
		else{
			if(sv[i].diemtk >= 6.5)
				demkha++;
			else{
			 if(sv[i].diemtk >= 5.0)
					demtb++;
				else
				demyeu++;	
			}
		}		
	}
	cout<<"\n*So hoc sinh gioi la:"<<demgioi;
	cout<<"\n*So hoc sinh kha la:"<<demkha;
	cout<<"\n*So hoc sinh trung binh la:"<<demtb;
	cout<<"\n*So hoc sinh yeu la:"<<demyeu;
}

