#include<iostream>
#include<string>
#include<iomanip>
#include<set>
using namespace std;

class Khoa;
class Ban;
class Truong;


class Khoa{
	private:
		string makhoa;
		string tenkhoa;		
		friend class Truong;
		friend void RequestExecute(Truong *t, int n);
};

class Ban{
	private:
		string maban;
		string tenban;
	public:
		void input();
		void output();
};

void Ban::input()
{
	cout<<"Nhap vao ma ban: ";getline(cin,this->maban);
	cout<<"Nhap vao ten ban: ";getline(cin,this->tenban);
}

void Ban::output()
{
	cout<<"Ma ban: "<<this->maban<<endl;
	cout<<"Ten Ban: "<<this->tenban<<endl;
}

class Truong{
	private:
		string tent;
		int sk;
		Khoa x[100];
		int sb;
		Ban y[100];
	public:
		void input();
		void output();
		friend void RequestExecute(Truong *t, int n);
};

void Truong::input()
{
	cout<<"Nhap vao ten truong: ";getline(cin,this->tent);
	cout<<"Nhap vao so luong khoa cua truong: ";cin>>this->sk;cin.ignore();
	for(int i = 0; i < this->sk; i++)
	{
		cout<<"Nhap vao ma khoa thu "<<i+1<<": ";getline(cin,x[i].makhoa);
		cout<<"Nhap vao ten khoa thu "<<i+1<<": ";getline(cin,x[i].tenkhoa);
	}
	cout<<"Nhap vao so luong ban cua truong :";cin>>this->sb;cin.ignore();
	for(int i = 0; i < this->sb; i++)
	{
		y[i].input();
	}
}

void Truong::output()
{
	cout<<"Ten truong: "<<this->tent<<endl;
	cout<<"So khoa: "<<this->sk<<endl;
	cout<<"+-----+----------+----------+"<<endl;
	cout<<"|"<<left<<setw(5)<<"STT"<<"|"<<left<<setw(10)<<"Ma Khoa"<<"|"<<left<<setw(10)<<"Ten Khoa"<<"|"<<endl;
	for(int i = 0; i < this->sk; i++)
	{
		cout<<"|"<<left<<setw(5)<<i+1<<"|"<<left<<setw(10)<<x[i].makhoa<<"|"<<left<<setw(10)<<x[i].tenkhoa<<"|"<<endl;
	}
	cout<<"+-----+----------+----------+"<<endl;
	cout<<"So Ban: "<<this->sb<<endl;
	for(int i = 0; i < this->sb; i++)
	{
		y[i].output();
	}
}

void RequestExecute(Truong *t, int n)
{
	/*for(int i = 0; i < n; i++)
	{
		for(int j = 0 ; j < t[i].sk; j++)
		{
			if(t[i].x[j].tenkhoa == "CNTT" || t[i].sb >= 3)
			{
				t[i].output();
			}
		}
	}*/
	
}
int main()
{
	int n;cin>>n;cin.ignore();
	Truong t[n];
	for(int i = 0; i < n; i++)
	{
		t[i].input();
		cout<<endl;
	}
	for(int i = 0; i < n; i++)
	{
		t[i].output();
		cout<<endl;
	}
	RequestExecute(t,n);
	return 0;
}
