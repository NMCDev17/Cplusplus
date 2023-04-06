#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;


int main()
{
	int n,s;cin>>n>>s;
	int *w = new int[n+1]; // luu trong cua cua cac do vat tu i > n;
	int *v = new int[n+1];// luu gia tri cua cac do vat tu i > n;
	int d[n+1][s+1];
	for(int i = 1; i <= n; i++)
	{
		cin>>w[i];cin>>v[i];
	}
	memset(d,false,sizeof(d));
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= s; j++)
		{
			d[i][j] = d[i-1][j];// neu khong lua chon do vat;
			if(w[i] <= j)
			{
				d[i][j] = max(d[i][j],(d[i-1][j] + v[i]));
			}
		}
	}
	cout<<d[n][s];
	return 0;
}
