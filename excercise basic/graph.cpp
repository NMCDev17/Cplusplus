#include<iostream>
#include<vector>
using namespace std;

int n,m;
int a[100][100];
vector<int> b[100];
vector<pair<int,int>> c;
int main()
{
	cin>>n;
//	cin>>m;
//	Chuyen doi tu danh sach canh sang ma tran ke;
/*	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		a[x][y]= a[y][x] = 1;
	}
	
	for(int i = 1 ;i<=n;i++)
	{
		for(int j=1 ;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}*/
	
//	chuyen doi tu danh sach canh sang danh sach ke;
/*for(int i=1;i<=m;i++)
{
	int x,y;
	cin>>x>>y;
	b[x].push_back(y);
	b[y].push_back(x);
}

for(int i=1;i<=n;i++)
{
	cout<<i<<":";
	for(int x : b[i])
	{
		cout<<x<<" ";
	}
	cout<<endl;
}*/

//chuyen doi tu ma tran ke sang danh sach canh;
/*for(int i=1;i<=n;i++)
{
	cout<<"dong "<<i<<":";
	for(int j=1 ;j<=n;j++)
	{
		cin>>a[i][j];
	}
}

for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n;j++)
	{
		if(a[i][j] == 1 && i<j)
		{
			c.push_back({i,j});
		}
	}
}

for(auto x : c)
{
	cout<<x.first<<" "<<x.second<<endl;
}*/

//chuyen doi tu ma tran ke sang danh sach ke;

for(int i=1;i<=n;i++)
{
	cout<<"dong "<<i<<":";
	for(int j=1;j<=n;j++)
	{
		cin>>a[i][j];
	}
}

for(int i=1;i<=n;i++)
{
	for(int j=1;j<=n;j++)
	{
		if(a[i][j] == 1)
		{
			b[i].push_back(j);
		}
	}
}

	for(int i=1;i<=n;i++)
	{
		cout<<i<<":";
		for(int x : b[i])
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}
