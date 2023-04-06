#include<iostream>
#include<string>
using namespace std;

class Creator{
	private:
		string name;
		string address;
	public:
		Creator();
		Creator(string ,string );
		string getName();
		void setName(string );
		string getAddress();
		void setAddress(string );
		void input();
		void output();
};

Creator::Creator()
{
	this->name = "";
	this->address = "";
}

Creator::Creator(string name, string address)
{
	this->name = name;
	this->address = address;
}

void Creator::setName(string name)
{
	this->name = name;
}

string Creator::getName()
{
	return this->name;
}

void Creator::setAddress(string address)
{
	this->address = address;
}

string Creator::getAddress()
{
	return this->address;
}

void Creator::input()
{
	cout<<"Nhap vao ten tac gia: ";getline(cin,this->name);
	cout<<"Nhap vao dia chi: ";getline(cin,this->name);
}

void Creator::output()
{
	cout<<"Ten giac gia: "<<this->name<<endl;
	cout<<"Dia chi tac gia: "<<this->name<<endl; 
}

class NXB{
	private:
		string namexb;
		string addxb;
	public:
		void input();
		void output();
		NXB();
		NXB(string ,string );
		void setNameXb(string );
		string getNameXb();
		void setAddXb(string );
		string getAddXb();
};

NXB::NXB()
{
	this->namexb = "";
	this->addxb = "";
}

NXB::NXB(string namexb, string addxb)
{
	this->namexb = namexb;
	this->addxb = addxb;
}

string NXB::getNameXb()
{
	return this->namexb;
}

void NXB::setNameXb(string namexb)
{
	this->namexb = namexb;
}

void NXB::setAddXb(string addxb)
{
	this->addxb = addxb;
}

string NXB::getAddXb()
{
	return this->addxb;
}

void NXB::input()
{
	cout<<"Nhap vao ten nxb: ";getline(cin,this->namexb);
	cout<<"Nhap vao dia chi nxb: ";getline(cin,this->addxb);
}

void NXB::output()
{
	cout<<"Ten NXB: "<<this->namexb<<endl;
	cout<<"Dia chi NXB: "<<this->addxb<<endl;
}
class Book{
	private:
		string nameb;
		Creator cr;
		NXB xb;
	public:
		friend void GetBook(Book* , int);
		Book();
		Book(string, Creator, NXB);
		void input();
		void output();
		void setNameb(string nameb);
		string getNameb();
};

Book::Book()
{
	this->nameb = "";
}

void Book::setNameb(string nameb)
{
	this->nameb = nameb;
}

string Book::getNameb()
{
	return this->nameb;
}

void Book::input()
{
	cout<<"Nhap vao ten sach: ";getline(cin,this->nameb);
	cr.Creator::input();
	xb.NXB::input();
}

void Book::output()
{
	cout<<"Ten sach: "<<this->nameb<<endl;
	cr.Creator::output();
	xb.NXB::output();
}

void GetBook(Book *b,int n)
{
	for(Book *i = b; i < b + n; i++)
	{
		if(i->xb.getNameXb() == "Thanh Nien")
		{
			i->Book::output();
		}
	}
}

int main()
{
	int n;
	cout<<"Nhap vao so luong sach: ";cin>>n;cin.ignore();
	Book b[n];
	for(Book *i = b; i < b + n; i++)
	{
		i->input();
	}
	cout<<endl;
	GetBook(b,n);
	return 0;
}
