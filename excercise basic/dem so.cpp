#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,dem=0;
	cout<<"nhap vao n:";cin>>n;
	
	while(n>0)
	{
		n=n/10;
		dem++;
	}
	cout<<"so vua nhap co:"<<dem<< " chu so";
	getch();
	
}
