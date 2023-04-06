#include<iostream>
#include<cstdio>
#include<cstring>
#define MAX 100
using namespace std;

void NhapXauKyTu(char a[])
{
	fflush(stdin);
	gets(a);
}

void XuatXau(char a[])
{
	cout<<a;
}

void XoaKhoangTrang(char a[])
{
	int length=strlen(a);
	for(int i=0;i<length-1;i++)
	{
		if(a[i]==' ' && a[i+1]==' ')
		{
			strcpy(&a[i],&a[i+1]);
			i--;
		}
	}
}
int main()
{
	char a[MAX];
	NhapXauKyTu(a);
	cout<<"Xau vua nhap la:";
	XuatXau(a);
	cout<<"\nXau khi xoa khoang trang dau cuoi la:"<<endl;
	XoaKhoangTrang(a);
	XuatXau(a);
return 0;	
}
