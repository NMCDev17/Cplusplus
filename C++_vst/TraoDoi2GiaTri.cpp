#include<iostream>
using namespace std;


int main()
{
	int a=8, b=10;
	int* p;
	p = &a;
	*p = 4;
	p = &b;
	*p = 5;
	cout << a << " " << b;
	return 0;
}