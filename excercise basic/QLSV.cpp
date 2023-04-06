#include<iostream>
#include<string>
#include<iomanip>
#include<cstring>
using namespace std;

struct Sinhvien{
	string name;
	int age;
	string address;
	float toan = 0;
	float tin = 0;
	float anh = 0;
	float avg= 0;
};
typedef Sinhvien SV;

void NhapThongTinSinhVien(SV sv[],int &n)
{
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap vao ten sinh vien:";getline(cin,sv[i].name);fflush(stdin);
		cout<<"Nhap vao tuoi sinh vien:";cin>>sv[i].age;fflush(stdin);
		cout<<"Nhap vao dia chi sinh sien:";getline(cin,sv[i].address);fflush(stdin);
		cout<<"Nhap vao diem toan cua sinh vien:";cin>>sv[i].toan;fflush(stdin);
		cout<<"Nhap vao diem tin cua sinh vien:";cin>>sv[i].tin;fflush(stdin);
		cout<<"Nhap vao diem anh cua sinh vien:";cin>>sv[i].anh;fflush(stdin);
	}
}
void XuatSinhVien(SV sv[],int &n)
{
	cout<<"+--------------------+----------+--------------------+----------+----------+----------+----------+"<<endl;
	cout<<"|"<<left<<setw(20)<<"Name"<<"|"<<left<<setw(10)<<"Age"<<"|"<<left<<setw(20)<<"Address"
	<<"|"<<left<<setw(10)<<"Diem Toan"<<"|"<<left<<setw(10)<<"Diem Tin"<<"|"<<left<<setw(10)<<"Diem Anh"<<"|"
	<<left<<setw(10)<<"DiemTB"<<"|"<<endl;
	cout<<"+--------------------+----------+--------------------+----------+----------+----------+----------+"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"|"<<left<<setw(20)<<sv[i].name<<"|"<<left<<setw(10)<<sv[i].age<<"|"<<left<<setw(20)<<sv[i].address
		<<"|"<<left<<setw(10)<<sv[i].toan<<"|"<<left<<setw(10)<<sv[i].tin<<"|"<<left<<setw(10)<<sv[i].anh<<"|"
		<<left<<setw(10)<<sv[i].avg<<"|"<<endl;
	}
	cout<<"+--------------------+----------+--------------------+----------+----------+----------+----------+"<<endl;
}

float DiemTB(SV sv[] ,int i)
{
	float avg;
	avg = (sv[i].toan + sv[i].tin + sv[i].anh)/3;
	return avg;
}

void DiemTBSinhVien(SV sv[],int n)
{
	for(int i=0;i<n;i++)
	{
		sv[i].avg = DiemTB(sv,i);
	}
}
int DemSinhVienDatHocBong(SV sv[],int n)
{
	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(DiemTB(sv,i) >= 8.0)
		{
			count++;
		}
	}
	return count;
}

void HienThi1SinhVien(SV sv[],int i)
{
	cout<<"+--------------------+----------+--------------------+----------+----------+----------+----------+"<<endl;
	cout<<"|"<<left<<setw(20)<<"Name"<<"|"<<left<<setw(10)<<"Age"<<"|"<<left<<setw(20)<<"Address"
	<<"|"<<left<<setw(10)<<"Diem Toan"<<"|"<<left<<setw(10)<<"Diem Tin"<<"|"<<left<<setw(10)<<"Diem Anh"<<"|"
	<<left<<setw(10)<<"DiemTB"<<"|"<<endl;
	cout<<"+--------------------+----------+--------------------+----------+----------+----------+----------+"<<endl;
	cout<<"|"<<left<<setw(20)<<sv[i].name<<"|"<<left<<setw(10)<<sv[i].age<<"|"<<left<<setw(20)<<sv[i].address
	<<"|"<<left<<setw(10)<<sv[i].toan<<"|"<<left<<setw(10)<<sv[i].tin<<"|"<<left<<setw(10)<<sv[i].anh<<"|"
	<<left<<setw(10)<<sv[i].avg<<"|"<<endl;
	cout<<"+--------------------+----------+--------------------+----------+----------+----------+----------+"<<endl;
}
void SearchStudent(SV sv[],int n)
{
	bool temp = 0;
	string ten;
	cout<<"Nhap vao sinh vien muon tim:";getline(cin,ten);fflush(stdin);
	for(int i=0;i<n;i++)
	{
		if(sv[i].name == ten)
		{
			HienThi1SinhVien(sv,i);
			temp = 1;
		}
	}
	if(temp == 0)
	{
		cout<<"Sinh vien khong ton tai!"<<endl;
	}
}
int main()
{
	int n;
	cout<<"Nhap vao so luong sinh vien:";cin>>n;fflush(stdin);
	SV sv[n];
	NhapThongTinSinhVien(sv,n);
	DiemTBSinhVien(sv,n);
	cout<<"Danh sach vien sien"<<endl;
	XuatSinhVien(sv,n);	
	int check = DemSinhVienDatHocBong(sv,n);
	cout<<"so sinh vien dat hoc bong:"<<check<<endl;
	SearchStudent(sv,n);
	return 0;
}
