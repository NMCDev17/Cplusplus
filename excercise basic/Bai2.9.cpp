#include<iostream>
#define MAX 100
using namespace std;

void NhapMang2Chieu(int a[][MAX],int &n)
{
	while(n<0 || n>100)
	{
		cout<<"\nNhap lai so luong dong va cot cua ma tran vuong:";cin>>n;
	}
	if(n>0 || n<100)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<"a["<<i<<"]"<<"["<<j<<"]:";cin>>a[i][j];
			}
		}
	}
}

void XuatMang2Chieu(int a[][MAX],int &n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int Check(int a[][MAX],int &n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]!=a[j][i])
			{
				return 0;
			}
		}
	}
	return 1;
}
void TongCacPhanTuTrenDgCheoChinh(int a[][MAX],int &n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
			}
		}
	}
	cout<<"\nTong cac phan tu tren duong cheo chinh la:"<<sum;
}
void TongCacPhanTuTrenDuongCheoPhu(int a[][MAX],int &n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i+j==n-1)
			{
				sum+=a[i][j];
			}
		}
	}
	cout<<"\nTong cac phan tu tren duong cheo phu la:"<<sum;
}
int main()
{
	int a[MAX][MAX];
	int n;
	cout<<"Nhap vao so luong dong va cot cua ma tran vuong:";cin>>n;
	NhapMang2Chieu(a,n);
	if(n>0 || n<100)
	{
		cout<<"\nMang vua nhap la:"<<endl;
		XuatMang2Chieu(a,n);
		if(Check(a,n))
		{
			cout<<"\nMang doi xung qua duong cheo chinh!";
		}
		else{
			cout<<"\nMang khong doi xung qua duong cheo chinh!";
		}
		TongCacPhanTuTrenDgCheoChinh(a,n);
		TongCacPhanTuTrenDuongCheoPhu(a,n);
	}
return 0;	
}
