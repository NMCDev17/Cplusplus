#include<iostream>
using namespace std;

int main()
{
	int x1=5,x2=15;
	int *y;
	y=&x1;
	*y=10;
	y=&x2;
	*y=20;
	cout<<"Gia tri 1="<<x1<<"\nGia tri 2="<<x2;
	return 0;
}
