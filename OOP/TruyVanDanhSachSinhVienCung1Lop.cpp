#include<iostream>
#include<vector>
#include<map>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;

class SinhVien{
	private:
		string masv,name,lop;
		float gpa;
	public:
		SinhVien();
		SinhVien(string, string, string, float);
		friend istream& operator >> (istream& in, SinhVien &a);
		friend ostream& operator << (ostream& ou, SinhVien a);
		bool operator < (SinhVien another);
		string getLop(){
			return this->lop;
		}
};

SinhVien::SinhVien()
{
	this->masv = "";
	this->name = "";
	this->lop = "";
	this->gpa = 0;
}

SinhVien::SinhVien(string masv, string name, string lop, float gpa)
{
	this->masv = masv;
	this->name = name;
	this->lop = lop;
	this->gpa = gpa;
}

istream& operator >> (istream& in, SinhVien &a)
{
	cout<<"Nhap vao ma sinh vien: ";getline(in,a.masv);
	cout<<"Ten sinh vien: ";getline(in,a.name);
	cout<<"Lop: ";getline(in,a.lop);
	cout<<"Gpa: ";in>>a.gpa;in.ignore();
	return in;
}

ostream& operator <<(ostream& ou, SinhVien a)
{
	ou<<"Masv: "<<a.masv<<endl;
	ou<<"Ten sv: "<<a.name<<endl;
	ou<<"Lop: "<<a.lop<<endl;
	ou<<"Gpa: "<<a.gpa<<endl;
}

bool SinhVien::operator < (SinhVien another)
{
	return this->gpa < another.gpa;
}
int main()
{
	int n;cin>>n;cin.ignore();
	SinhVien *a = new SinhVien[n];
	map<string,vector<SinhVien>> mp;
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
		mp[a[i].getLop()].push_back(a[i]);
	}
	int q;cin>>q;cin.ignore();
	while(q--)
	{
		string s;cin>>s;
		cout<<"Danh sach sinh vien lop "<<s<<" la: "<<endl;
		for(SinhVien x : mp[s])
		{
			cout<<x;
		}
	}
	return 0;
}

