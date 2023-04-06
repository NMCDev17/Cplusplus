#include<iostream>
using namespace std;
void HoanVi(int &a,int &b)
{
	int z;
	z=a;
	a=b;
	b=z;
	cout<<"hoan vi: "<<a<<" ; "<<b;
}

int main()
{
	int x=5,y=21;
	HoanVi(x,y);
}
