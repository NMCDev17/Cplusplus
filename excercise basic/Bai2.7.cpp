#include<iostream>
#include<cmath>
#define MAX 100
using namespace std;

void InArr(int a[][100],int &n,int &m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"a["<<i<<"]"<<"["<<j<<"]:";cin>>a[i][j];
		}
	}
}

void OutArr(int a[][100],int &n,int &m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}
}
void InDongThuI(int a[][100],int &n,int &m,int &i)
{
	n=i;	// giu nguyen dong va tang so cot;
	for(int h=0;h<m;h++)
	{
		cout<<a[n][h];	//in ra man hinh cac phan tu
		cout<<" ";
	}
}
void TongCacPhanTuDongI(int a[][100],int &n,int &m,int &i)
{
	int sum=0;
	n=i; 	// giu nguyen dong va tang so cot;
	for(int h=0;h<m;h++)
	{
		sum+=a[n][h];	// Tinh tong cac phan tu cua dong;
	}
	cout<<"\nTong cac phan tu dong thu "<<i<<" la:"<<sum;
}

void InPhanTuCotJ(int a[][100],int &n,int &m,int &j)
{
	m=j; // giu nguyen cot chi tang so dong;
	for(int h=0;h<n;h++)
	{
		cout<<a[h][m]<<endl;	//In cot ra man hinh;
	}
}

void TongCacPhanTuCotJ(int a[][100],int &n,int &m,int &j)
{
	int sum=0;
	m=j; // giu nguyen cot chi tang so dong;
	for(int h=0;h<n;h++)
	{
		sum+=a[h][m];
	}
	cout<<"\nTong cac phan tu cot "<<j<<" la:"<<sum;
}
void XoaCot(int a[][100],int &n,int &m,int k)
{
	if(k<0||k>=m)
	{
		return;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=k;j<m-1;j++)
		{
			a[i][j]=a[i][j+1];
		}
	}
	--m;
}
void XoaDong(int a[][100],int &n,int &m, int h)
{
	if(h<0||h>=n)
	{
		return;
	}
	for(int i=h;i<n-1;i++)
	{
		for(int j=0;j<m;j++)
		{
			a[i][j]=a[i+1][j];
		}
	}
	--n;
	
}
void InPhanTuChan(int a[][100],int &n,int &m)
{
	cout<<"\nCac phan tu chan trong mang la:";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]%2==0)
			{
				cout<<a[i][j]<<"\t";
			}
		}
	}
}
void InPhanTuLe(int a[][100],int &n,int &m)
{
	cout<<"\nCac phan tu le trong mang la:";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]%2!=0)
			{
				cout<<a[i][j]<<"\t";
			}
		}
	}
}
int KtraNTo(int x)
{
	if(x<2)
	{
		return 0;
	}
	else{
		for(int i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			return 0;
		}
	}
	return 1;
}
void InPhanTuNTo(int a[][100],int &n,int &m)
{
	cout<<"\nCac phan tu nguyen to la:";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(KtraNTo(a[i][j]))
			{
				cout<<a[i][j]<<"  ";
			}
		}
	}
}

int main()
{
	int a[MAX][100],n,m;
	cout<<"Nhap vao so dong cua ma tran:";cin>>n;
	cout<<"\nNhap vao so cot cua ma tran:";cin>>m;
	InArr(a,n,m);
	cout<<"\nMang vua nhap la:"<<endl;
	OutArr(a,n,m);
	/*int i;
	cout<<"\nVi tri dong muon in ra man hinh:";cin>>i;
	InDongThuI(a,n,m,i);
	TongCacPhanTuDongI(a,n,m,i);*/
/*	int j;
	cout<<"\nCot muon in ra man hinh:";cin>>j;
	InPhanTuCotJ(a,n,m,j);
	TongCacPhanTuCotJ(a,n,m,j);*/
/*	int k;
	cout<<"\nNhap vao vi tri cot muon xoa:";cin>>k;
	XoaCot(a,n,m,k);
	OutArr(a,n,m);*/
/*	int h;
	cout<<"\nNhap vao vi tri dong muon xoa:";cin>>h;
	XoaCot(a,n,m,h);
	OutArr(a,n,m);*/
	/*InPhanTuChan(a,n,m);
	InPhanTuLe(a,n,m);*/
/*	InPhanTuNTo(a,n,m);*/
return 0;	
}
