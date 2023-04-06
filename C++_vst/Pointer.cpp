#include<iostream>
using namespace std;

int Sum_ALL_Element(int *a)
{
	int sum = 0;
	for (int i=0;  i < 5; i++)
	{
		sum += a[i];
	}
	return sum;
}
int main()
{
	int a[5] = {1,2,3,4,5};
	cout << Sum_ALL_Element(a);
	return 0;
}