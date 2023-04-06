#include<iostream>
using namespace std;

int Sum(int* a, int* b)
{
	int sum = *a + *b;
	return sum;
}
int main()
{
	int a=2, b=8;
	cout << Sum(&a,&b);
	return 0;
}