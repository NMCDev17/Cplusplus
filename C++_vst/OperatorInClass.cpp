#include<iostream>
using namespace std;

class Hang
{
private:
	char mahang[10];
	char tenhang[20];
	int sl;
	float dg;
public:
	friend istream& operator>>(istream& x, Hang& y);
	friend ostream& operator<<(ostream& x, Hang& y);
};

istream& operator>>(istream& x, Hang& y)
{
	cout << "Nhap vao ma hang:"; x >> y.mahang;
	cout << "Nhap vao ten hang:"; x >> y.tenhang;
	cout << "Nhap vao so luong:"; x >> y.sl;
	cout << "Nhap vao don gia:"; x >> y.dg;
	return x;
}

ostream& operator<<(ostream& x, Hang& y)
{
	x << "Ma hang:" << y.mahang<<endl;
	x << "Ten hang:" << y.tenhang << endl;
	x << "So luong:" << y.sl << endl;
	x << "Don gia:" << y.dg << endl;
	return x;
}

int main()
{
	Hang x;
	cout << "Nhap x:" << endl; cin >> x;
	cout << "X vua nhap:" << x;
	return 0;
}