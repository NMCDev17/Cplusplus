#include<iostream>
#define MAX 100
using namespace std;

void Nhap_Mang(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]";cin>>a[i];
	}
}

void Xuat_Mang(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

int Min(int a[],int &n)
{
	int ln=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<ln)
		ln=a[i];
	}
	return ln;
}

int main()
{
	int a[100],n;
	cout<<"Nhap vao s luong phan tu trong mang:";cin>>n;
	Nhap_Mang(a,n);
	cout<<"Mang vua nhap la:"<<endl;
	Xuat_Mang(a,n);
	cout<<"\nGia tri Nho nhat trong mang la:"<<Min(a,n);

return 0;
}
