#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

struct Nhanvien
{
	char manv[10];
	char tennv[20];
	char ngaysinh[10];
	int luong;
}nv[100];

void NhapThongTin(Nhanvien nv[],int &n);
void XuatThongTin(Nhanvien nv[],int &n);
int DemNhanVienHuongPhuCap(Nhanvien nv[],int n);

int main()
{
	int n;
	cout<<"Nhap vao so luong nhan vien:";cin>>n;fflush(stdin);
	cout<<"==== Nhap thong tin ===="<<endl;
	NhapThongTin(nv,n);
	cout<<"==== Danh sach sinh vien ===="<<endl;
	XuatThongTin(nv,n);
	int m_count = DemNhanVienHuongPhuCap(nv,n);
	cout<<"So nhan vien huong phu cap la:"<<m_count<<endl;
	return 0;
}

void NhapThongTin(Nhanvien nv[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"manv:";gets(nv[i].manv);fflush(stdin);
		cout<<"Ten nhan vien:";gets(nv[i].tennv);fflush(stdin);
		cout<<"Ngay sinh:";gets(nv[i].ngaysinh);fflush(stdin);
		cout<<"Luong:";cin>>nv[i].luong;fflush(stdin);
	}
}

void XuatThongTin(Nhanvien nv[],int &n)
{
	cout<<"+----------+--------------------+----------+----------+"<<endl;
	cout<<"|"<<left<<setw(10)<<"Manv"<<"|"<<left<<setw(20)<<"Ten nhan vien"<<"|"
	<<left<<setw(10)<<"Ngay sinh"<<"|"<<left<<setw(10)<<"Luong"<<"|"<<endl;
	cout<<"+----------+--------------------+----------+----------+"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"|"<<left<<setw(10)<<nv[i].manv<<"|"<<left<<setw(20)<<nv[i].tennv<<"|"
		<<left<<setw(10)<<nv[i].ngaysinh<<"|"<<left<<setw(10)<<nv[i].luong<<"|"<<endl;
	}
	cout<<"+----------+--------------------+----------+----------+"<<endl;
}

int DemNhanVienHuongPhuCap(Nhanvien nv[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(nv[i].luong <= 3000000)
		{
			count++;
		}
	}
	return count;
}

