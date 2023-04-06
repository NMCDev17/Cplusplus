#include<iostream>
using namespace std;

int TongCacUoc(int &n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
return sum;
}

int TichCacUoc(int &n)
{
	int product=1;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
			product=product*i;
	}
return product;
}


int DemCacUoc(int &n)
{
	//int sum=0;
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		dem++;
	}
return dem;
}

int Search(int &n)
{
	int maxl=1;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0&&i%2!=0)
		{
			if(i>maxl)
			maxl=i;
		}
	}
	return maxl;
}
int SoHoanThien(int &n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}	
return sum;
}

int main()
{
	int n;
	do{
		cout<<"Nhap vao so nguyen duong n:";cin>>n;
		if(n<=0)
		{
			cout<<"\nNhap n khong thoa man!";
		}
	}
	while(n<0);
	cout<<"\nTong cac uoc cua "<<n<<" la:"<<TongCacUoc(n);
	cout<<"\nTich cac uoc cua "<<n<<" la:"<<TichCacUoc(n);
	cout<<"\n Co "<<DemCacUoc(n)<<" uoc!";
	cout<<"\nUoc le lon nhat la:"<<Search(n);
	int kq=SoHoanThien(n);
	if(kq==n)
	{
		cout<<"\nLa so hoan hao";
	}
	else
	{ 
	 cout<<"\nKhong la so hoan hao!";
	}
		
	
return 0;
}
