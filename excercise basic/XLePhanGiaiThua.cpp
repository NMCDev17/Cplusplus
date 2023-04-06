#include<iostream>
#include<math.h>
using namespace std;

float Tong_X_Phan_Le_Giai_Thua(int n,float x);
int Tong_Cac_Chu_So_Binh_Phuong(int n);
float Tong_1_Phan_N(int n);
float Tong_1_Phan_N_Chan(int n);
float Tich1PhanN(int n);
float Tong_tule_mauchan(int n);

int main()
{
	int n;
	float x;
	cout<<"Nhap vao so nguyen duong N = ";cin>>n;
	cout<<"\nNhap vao x = ";cin>>x;
	float kq=Tong_X_Phan_Le_Giai_Thua(n,x);
	cout<<"S(x,n) = "<<kq;
	cout<<"\nTong n^2="<<Tong_Cac_Chu_So_Binh_Phuong(n);
	cout<<"\nTong1/n="<<Tong_1_Phan_N(n);
	cout<<"\nTong 1/2n la="<<Tong_1_Phan_N_Chan(n);
	cout<<"\nTong 1/n*(n+1)="<<Tich1PhanN(n);
	cout<<"\nTong (2n+1/2n+2) la="<<Tong_tule_mauchan(n);
}

float Tong_X_Phan_Le_Giai_Thua(int n, float x)
{
	float sum=0;
	int giaithua=1;
	for(int i=1;i<=n;i++)
	{	
		giaithua*=i;
		if(i%2!=0){
		 sum+=pow(x,i)/giaithua;	
		}
	}
return sum;
}
int Tong_Cac_Chu_So_Binh_Phuong(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=pow(i,2);
	}
return sum;
}
float Tong_1_Phan_N(int n)
{
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=1.0/i;
	}
return sum;
}
float Tong_1_Phan_N_Chan(int n)
{
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		sum+=1.0/i;
	}
return sum;
}
float Tich1PhanN(int n)
{
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=1.0/(i*(i+1));
	}
return sum;
}
float  Tong_tule_mauchan(int n)
{
	float sum=0;
	for(int i=0;i<=n;i++)
	{
		sum+=(float)((2*i)+1)/((2*i)+2);
	}
return sum;
}
