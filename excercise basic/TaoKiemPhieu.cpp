#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

class Phong
{
	char tenphong[30];
	char truongphong[20];
	char maphong[10];
	public:
	void Nhap();
	void Xuat();
};

void Phong::Nhap()
{
	cout<<"Ma phong:";gets(maphong);fflush(stdin);
	cout<<"Ten phong:";gets(tenphong);fflush(stdin);
	cout<<"Truong phong:";gets(truongphong);fflush(stdin);
}

void Phong::Xuat()
{
	cout<<"Kiem ke tai phong:"<<tenphong<<left<<setw(10)<<" "<<"Ma phong:"<<maphong<<endl;
	cout<<"Truong phong:"<<truongphong<<endl;	
}

class NhanVien
{
	char tennv[20];
	char chucvu[20];
	public:
	void Nhap();
	void Xuat();	
};

void NhanVien::Nhap()
{
	cout<<"Ten nhan vien:";gets(tennv);fflush(stdin);
	cout<<"Chuc vu:";gets(chucvu);fflush(stdin);
}

void NhanVien::Xuat()
{
	cout<<"Nhan vien kiem ke:"<<tennv<<left<<setw(10)<<" "<<"Chuc vu:"<<chucvu<<endl;
}

class TaiSan
{
	friend class Phieu;
	char tents[20];
	char tinhtrang[10];
	int sl;
	public:
	void Nhap();
	void Xuat();
};

void TaiSan::Nhap()
{
	cout<<"Ten tai san:";gets(tents);fflush(stdin);
	cout<<"So luong:";cin>>sl;fflush(stdin);
	cout<<"Tinh trang:";gets(tinhtrang);fflush(stdin);
}

void TaiSan::Xuat()
{
	cout<<"|"<<left<<setw(15)<<tents<<"|"<<left<<setw(10)
	<<sl<<"|"<<left<<setw(10)<<tinhtrang<<"|"<<endl;
}

class Phieu
{
	char maphieu[10];
	char ngay[20];
	Phong p;
	NhanVien nv;
	TaiSan ts[100];
	int slts;
	public:
	void Nhap();
	void Xuat();
};

void Phieu::Nhap()
{
	cout<<left<<setw(19)<<" "<<"KIEM KE TAI SAN"<<left<<setw(19)<<" "<<endl;
	cout<<"Ma phieu:";gets(maphieu);fflush(stdin);
	cout<<"Ngay kiem ke:";gets(ngay);fflush(stdin);
	nv.Nhap();
	p.Nhap();
	cout<<"Nhap vao so luong tai san:";cin>>slts;fflush(stdin);
	for(TaiSan *i=ts;i<ts+slts;i++)
	{
		i->TaiSan::Nhap();
	}
}

void Phieu::Xuat()
{
	cout<<left<<setw(5)<<" "<<"PHIEU KIEM KE TAI SAN"<<left<<setw(5)<<" "<<endl;
	cout<<"\n";
	cout<<"Ma phieu:"<<maphieu<<left<<setw(10)<<" "<<"Ngay kiem ke:"<<ngay<<endl;
	nv.NhanVien::Xuat();
	p.Phong::Xuat();
	int count = 0,sum=0;
	cout<<"+---------------+----------+----------+"<<endl;
	cout<<"|"<<left<<setw(15)<<"Ten tai san"<<"|"<<left<<setw(10)
	<<"So luong"<<"|"<<left<<setw(10)<<"Tinh trang"<<"|"<<endl;
	cout<<"+---------------+----------+----------+"<<endl;
	for(TaiSan *i = ts; i < ts+slts ; i++)
	{
		i->TaiSan::Xuat();
		count++;
		sum+=i->sl;
	}
	cout<<"+---------------+----------+----------+"<<endl;
	cout<<"So tai san da kiem ke:"<<count<<left<<setw(10)<<" "<<"Tong so luong:"<<sum<<endl;	
}

int main()
{
	Phieu ph;
	ph.Phieu::Nhap();
	cout<<endl;
	ph.Phieu::Xuat();
	return 0;
}
