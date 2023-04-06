#include<iostream>
#include<cstdio>
#include "NhapXuat.h"
using namespace std;

void Ban::Nhap()
{
	cout<<"Nhap vao ma ban:";gets(maban);fflush(stdin);
	cout<<"\nNhap vao ten ban:";gets(tenban);fflush(stdin);
}

