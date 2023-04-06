#include<iostream>
using namespace std;

void Print_Element(int* a)
{
	for (int* i = a + 4; i >= a; i--)
	{
		cout << *i<<" ";
	}
}
int main()
{
	int a[5] = { 1,2,3,4,5 };
	Print_Element(a);
	return 0;
}