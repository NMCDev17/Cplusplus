#include<iostream>
#include<cmath>
#include<array>
using namespace std;

void Tong_Va_In(int n)
{
	while (n > pow(n, 5))
	{
		cout << "Nhap lai n:"; cin >> n;
	}
	int luu[10],nl=0;
	int sum = 0,sdao = 0, chuso = 0;
	while (n != 0)
	{
		luu[nl] = n % 10;
		chuso = n % 10;
		sdao = (10 * sdao) + chuso;
		n /= 10;
		nl++;
		sum += chuso;
	}
	cout << "So dao la:" << sdao << endl;
	cout << "Tong cac chu so la:" << sum << endl;
	for (int i = nl-1; i>=0; i--)
	{
		cout << luu[i]<<" ";
	}
}
int main()
{
	int n;
	cout << "Nhap vao n:"; cin >> n;
	Tong_Va_In(n);
	return 0;
}