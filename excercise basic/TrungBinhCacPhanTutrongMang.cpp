#include<iostream>
#define MAX 100
using namespace std;

void Input_Arr(float a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]";cin>>a[i];
	}
}
void Output_Arr(float a[],int &n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
}

float Avg(float a[],int &n)
{
	float avg;
	float sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
return avg;
}

int main()
{
	float a[MAX];
	int n;
	cout<<"Nhap vao so luong phan tu trong mang:";cin>>n;
	Input_Arr(a,n);
	cout<<"\nMang vua nhap la:";
	Output_Arr(a,n);
	float kq=Avg(a,n);
	cout<<"\nTrung binh cong cua cac phan tu trong mang la:"<<kq;
return 0;
}
