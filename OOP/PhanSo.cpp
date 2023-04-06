#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

long long UCLN(long long a, long long b)
{
	if(a == b) return b;
	if(a > b) return UCLN(b,a-b);
	else return UCLN(a,b-a);
}

long long BCNN(long long a, long long b)
{
	return a / UCLN(a,b) * b;
}
class PhanSo{
	private:
		long long tuso,mauso;
	public:
		PhanSo();
		PhanSo(long long tuso, long long mauso);
		void RutGon();
		friend istream& operator >> (istream& in, PhanSo &a);
		friend ostream& operator << (ostream& out, PhanSo a);
		friend PhanSo operator + (PhanSo a, PhanSo b);
};

PhanSo::PhanSo()
{
	this->tuso = 0;
	this->mauso = 0;
}

PhanSo::PhanSo(long long tuso, long long mauso)
{
	this->tuso = tuso;
	this->mauso = mauso;
}

istream& operator >> (istream& in, PhanSo &a)
{
	in>>a.tuso>>a.mauso;
	return in;
}
ostream& operator << (ostream& out, PhanSo a)
{
	out<<a.tuso<<"/"<<a.mauso<<endl;
	return out;
}
void PhanSo::RutGon()
{
	long long uc = UCLN(this->tuso,this->mauso);
	this->tuso /= uc;
	this->mauso /= uc;
}

PhanSo operator	+ (PhanSo a,PhanSo b)
{
	PhanSo sum;
//	long long bc =BCNN(a.mauso,b.mauso);
	long long mau = a.mauso * b.mauso; 
	sum.tuso = mau / a.mauso * a.tuso + mau / b.mauso * b.tuso;
	sum.mauso = mau;
	long long mc = UCLN(sum.tuso,sum.mauso);
	sum.tuso /= mc; sum.mauso /= mc;
	return sum;
}  
int main()
{
//	//RutGon Phan so;
//	PhanSo a;
//	cin>>a;
//	a.RutGon();
//	cout<<a<<endl;

//Tong 2 phan so;
	PhanSo a;
	cin>>a;
	PhanSo b;
	cin>>b;
	cout<<a+b<<endl;
	return 0;
}
