#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int Count(char str[])
{
	int count=1;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i] == ' ')
		{
			count++;
		}
	}
	return count;
}
int main()
{
	char str[100];
	fflush(stdin);
	cout<<"Nhap vao xau :";gets(str);
	int count = Count(str);
	cout<<"\nSo tu trong xau la:"<<count;
	return 0;
}
