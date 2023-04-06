#include<iostream>
#include<cstring>
using namespace std;

class Khoa;
class Truong;
class Ban;

class Khoa
{
	friend class Truong;
	friend void In(Truong *,int );
	private:
	char makhoa[10];
	char tenkhoa[20];
};

class Ban
{
	private:
		char tenban[20];
		char maban[10];
	public:
		void Nhap();
		void Xuat();
};

void Ban::Nhap()
{
	cout<<"Nhap vao ma ban:";cin.getline(maban,9);cin.ignore();
	cout<<"Nhap vao ten ban:";cin.getline(tenban,19);cin.ignore();
}

void Ban::Xuat()
{
	cout<<"Ma ban:"<<maban<<endl;
	cout<<"Ten ban:"<<tenban<<endl;
}

class Truong
{
	private:
		int slk;
		Khoa x[100];
		int slb;
		Ban y[100];
	public:
		void Nhap();
		void Xuat();
		friend void In(Truong* ,int );
};

void Truong::Nhap()
{
	cout<<"Nhap vao so luong khoa:";cin>>slk;cin.ignore();
	// Nhap vao khoa cua truong ;
	for(int i=0;i<slk;i++)
	{
		cout<<"Nhap vao ma khoa:";cin.getline(x[i].makhoa,9);cin.ignore();
		cout<<"Nhap vap ten khoa:";cin.getline(x[i].tenkhoa,19);cin.ignore();
	}
	//Nhap vao Ban cua truong;
	
	cout<<"Nhap vao so luong ban:";cin>>slb;cin.ignore();
	for(int j=0;j<slb;j++)
	{
		y[j].Ban::Nhap();
	}
}

void Truong::Xuat()
{
	for(int i=0;i<slk;i++)
	{
		cout<<"Ma Khoa:"<<x[i].makhoa<<endl;
		cout<<"Ten khoa:"<<x[i].tenkhoa<<endl;
	}
	
	for(int j=0;j<slb;j++)
	{
		y[j].Ban::Xuat();
	}
}

void In(Truong *a,int n)
{
	int check=0;
	for(Truong *s=a;s<a+n;s++)
	{
		for(int j=0;j<s->slk;j++)
		{
			if(strcmp(s->x[j].makhoa,"cntt")==0)
				check =1;
		}
		if(check==1||s->slb>=3)
		{
			s->Xuat();
			check = 0;
		}
	}
}
int main()
{
	Truong a[100];int n;
	cout<<"Nhap vao so luong truong:";cin>>n;cin.ignore();
	for(int i=0;i<n;i++)
	{
		cout<<"Truong thu:"<<i+1<<":"<<endl;
		a[i].Truong::Nhap();
	}	
	
	In(a,n);	
	return 0;
}
