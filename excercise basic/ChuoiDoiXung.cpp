#include<iostream>
#include<string.h>
#include<conio.h>
#define MAX 100
using namespace std;
int Lachuoidoixung(char []);
int main()
{
	char str[MAX];
	cout<<"Nhap 1 chuoi:";
	gets(str);
	int kq=Lachuoidoixung(str);
	if(kq==1)
		cout<<"Chuoi "<<str<<" la chuoi do xung";
	else
		cout<<"Chuoi "<<str<<" khong phai la doi xung";
return 0;
}

int Lachuoidoixung(char str[MAX])
{
	int flag=1;
	int l=strlen(str);
	for(int i=0;i<l/2;i++)
	{
		if(str[i]!=str[l-i-1])
		flag=0;
	}
	return flag;
}
