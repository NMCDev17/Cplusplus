#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cstring>
#include<fstream>
#include<string>
using namespace std;

struct Sinhvien{
	char masv[10];
	char tensv[50];
	float avg;
}sv[50];

void NhapThongTin(Sinhvien sv[],int &n)
{
	fflush(stdin);
	for(int i=1;i<=n;i++)
	{
		cout<<i<<", Ma sinh vien:";gets(sv[i].masv);fflush(stdin);
		cout<<"Ten sinh vien:";gets(sv[i].tensv);fflush(stdin);
		cout<<"Diem TB:";cin>>sv[i].avg;
		fflush(stdin);
	}
}

void XuatThongTin(Sinhvien sv[],int &n)
{
	cout<<left<<setw(44)<<"+----------+--------------------+----------+";
	cout<<"\n|"<<left<<setw(10)<<"Masv"<<"|"<<left<<setw(20)<<"TenSV"<<"|"<<left<<setw(10)<<"DiemTB"<<"|";
	cout<<"\n"<<left<<setw(44)<<"+----------+--------------------+----------+";
	for(int i=1;i<=n;i++)
	{
		cout<<"\n"<<"|"<<left<<setw(10)<<sv[i].masv<<"|"<<left<<setw(20)<<sv[i].tensv<<"|"<<left<<setw(10)<<sv[i].avg<<"|";
	}
	cout<<"\n"<<left<<setw(44)<<"+----------+--------------------+----------+"<<endl;
}

int demSvDatHocBong(Sinhvien sv[],int n)
{
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(sv[i].avg > 8.0)
		{
			count++;
		}
	}
	return count;
}

void HienThiSinhVienCoDiemCaoNhat(Sinhvien sv[],int n)
{
	cout<<"Sinh vien co diem TB cao nhat la:"<<endl;
	Sinhvien max[50];
	max[1]=sv[1];
	int temp=1,j;
	for(int i=2;i<=n;i++)
	{
		if(max[1].avg < sv[i].avg)
		{
			max[1]=sv[i];
			j=i;
		}
	}
	for(int z=j+1;z<=n;z++)
	{
		if(max[1].avg == sv[z].avg && strcmp(max[1].masv,max[z].masv) !=0)
		{
			temp++;
			max[temp]=sv[z];
		}
	}
	XuatThongTin(max,temp);
}

void SapXepSinhVien(Sinhvien sv[],int n)
{
	Sinhvien temp;
	for(int i=1;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(sv[i].avg > sv[j].avg)
			{
				temp=sv[i];
				sv[i]=sv[j];
				sv[j]=temp;
			}
		}
	}
}

void HienThiSinhVien(Sinhvien sv[],int i)
{
	cout<<left<<setw(44)<<"+----------+--------------------+----------+";
	cout<<"\n|"<<left<<setw(10)<<"Masv"<<"|"<<left<<setw(20)<<"TenSV"<<"|"<<left<<setw(10)<<"DiemTB"<<"|";
	cout<<"\n"<<left<<setw(44)<<"+----------+--------------------+----------+";
	cout<<"\n"<<"|"<<left<<setw(10)<<sv[i].masv<<"|"<<left<<setw(20)<<sv[i].tensv<<"|"<<left<<setw(10)<<sv[i].avg<<"|";
	cout<<"\n"<<left<<setw(44)<<"+----------+--------------------+----------+"<<endl;
}
void TraCuuSinhVien(Sinhvien sv[],int &n)
{
	Sinhvien sv1;
	int temp=0;
	fflush(stdin);
	cout<<"Nhap vao ma sinh vien muon tim:";gets(sv1.masv);
	for(int i=1;i<=n;i++)
	{
		if(strcmp(sv[i].masv,sv1.masv) == 0 )
		{
			HienThiSinhVien(sv,i);
			temp=1;
		}
	}
	if(temp==0)
	{
		cout<<"\nSinh vien khong ton tai!"<<endl;
	}
}

void ThemSinhVien(Sinhvien sv[],int &n)
{
	int n1;
	cout<<"Nhap vao so luong sinh vien muon them:";cin>>n1;fflush(stdin);
	for(int i=n+1;i<=n+n1;i++)
	{
		cout<<"Ma sv:";gets(sv[i].masv);fflush(stdin);
		cout<<"Ten sinh vien:";gets(sv[i].tensv);fflush(stdin);
		cout<<"DiemTB:";cin>>sv[i].avg;
		fflush(stdin);
	}
	n+=n1;
	cout<<"Them thanh cong!"<<endl;
	XuatThongTin(sv,n);
}

void XoaThongTin(Sinhvien sv[],int &n)
{
	int count = 0;
	Sinhvien sv2;
	fflush(stdin);
	cout<<"Nhap vao ma cua sinh vien de xoa:";gets(sv2.masv);fflush(stdin);
	for(int i=1;i<n;i++)
	{
		if(strcmp(sv[i].masv,sv2.masv) == 0)
		{			
			sv[i]=sv[i+1];
			count++;			
		}
	}
	n-=count;
	XuatThongTin(sv,n);
}

void XuatFile(Sinhvien sv[],int n)
{
	fstream outSv;
	outSv.open("C:\\Users\\cuong\\Desktop\\FileSinhvien.txt",ios_base::out);
	for(int i=1;i<=n;i++)
	{
		outSv<<sv[i].masv<<endl;
		outSv<<sv[i].tensv<<endl;
		outSv<<sv[i].avg<<endl;
	}
	outSv.close();
}

/*void LayThongTinTuFile(Sinhvien sv[],int n)
{
	fstream in;
	in.open("C:\\Users\\cuong\\Desktop\\ThongTinSV.txt",ios_base::in);
	int i=1;	
	for(int i=1;i<=n;i++)
	{
		getline(in,sv[i].masv,"\n");
		getline(in,sv[i].tensv,"\n");
		in>>sv[i].avg;
	}
	in.close();
}*/
int main()
{
	int n,key;
	cout<<"++++ Cac chuc nang chinh ++++"<<endl;
	cout<<"1.Nhap thong tin sinh vien.\n2.Hien thi danh sach sinh vien.\n3.So sinh vien dat hoc bong."
		"\n4.Hien thi sinh vien co diem cao nhat.\n5.Sap xep sinh vien theo diem."
		"\n6.Tra cuu thong tin sinh vien.\n7.Them sinh vien.\n8.Xoa sinh vien.\n9.XuatRaFile.\n0.Thoat."<<endl;
	do{
	cout<<"-->Chon:";cin>>key;
	switch(key){
		case 1:{
			cout<<"Nhap vao so luong sinh vien:";cin>>n;
			cout<<"====== Nhap thong tin ======"<<endl;
			NhapThongTin(sv,n);
			cout<<"Nhap thanh cong!"<<endl;
			break;
		}
		case 2:{
			cout<<"=========== Danh sach sinh vien ==========="<<endl;
			XuatThongTin(sv,n);
			break;
		}
		case 3:{
			int count=demSvDatHocBong(sv,n);
			cout<<"\nSo sinh vien dat hoc bong la:"<<count<<endl;
			break;
		}
		case 4:{
			HienThiSinhVienCoDiemCaoNhat(sv,n);
			break;
		}
		case 5:{
			cout<<"Sap xep tang dan theo diemTB:"<<endl;
			SapXepSinhVien(sv,n);
			XuatThongTin(sv,n);
			break;
		}
		case 6:{
			TraCuuSinhVien(sv,n);
			break;
		}
		case 7:{
			ThemSinhVien(sv,n);
			break;
		}
		case 8:{
			XoaThongTin(sv,n);
			break;
		}
		case 9:{
			XuatFile(sv,n);
			break;
		}
		/*case 10:{
			LayThongTinTuFile(sv,n);
			break;
		}*/
		case 0: break;
		default:
			cout<<"Khong hop le!"<<endl;
	}
	}while(key !=0);
return 0;
}
