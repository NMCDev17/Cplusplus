#include<iostream>
#include<stack>
using namespace std;

void InArr(stack<float> &a,int n)
{
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.push(x);
	}
}

void OutArr(stack<float> &a)
{
	while(!a.empty()){
		cout<<a.top()<<" ";
		a.pop();
	}
}
void PhanTuGanNhat(stack<float> a,int x,int n)
{
	while(!a.empty())
	{
		if(x == a.top())
		{
			cout<<a.top()<<" ";
			break;
		}	
		a.pop();
	}
}
int main()
{
	stack<float> a;
	int n;
	cout<<"Nhap vao so luong phan tu trong stack:";cin>>n;
	InArr(a,n);
	cout<<"stack vua nhap la:"<<endl;
	OutArr(a);
	int x;cout<<"Nhap vao x:";cin>>x;
	cout<<"Phan tu gan nhat voi X la:";
	PhanTuGanNhat(a,x,n);
	return 0;
}
