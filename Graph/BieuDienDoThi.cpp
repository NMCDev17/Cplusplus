#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main()
{
//	Chuyen tu danh sach canh sang ma tran ke;
	int n,m;
	cout << "Nhap vao so dinh:"; cin >> n;
	//cout << "Nhap vao so canh:"; cin >> m;
	//int a[100][100];
	/*for(int i = 1; i <= m;i++)
	{
		int x, y;
		cout<<"dau canh:";cin>>x;
		cout<<"Dinh cuoi:";cin>>y;
		a[x][y] = a[y][x] =  1;
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}*/
	
//	Chuyen tu danh sach canh sang danh sach ke;
/*	vector<int> a[100];
	for(int i = 1; i <= m;i++)
	{
		int x, y;
		cout<<"dau canh:";cin>>x;
		cout<<"Dinh cuoi:";cin>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	
	for(int i=1;i<=n;i++)
	{
		cout<<i<<":";
		for(int x : a[i])
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}*/
	
//	chuyen tu ma tran ke sang danh sach canh;
/*	int a[100][100];
	vector<pair<int,int>> edge;
	for(int i=1;i<=n;i++)
	{
		cout<<"dong:"<<i<<":";
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==1 && i<j)
			{
				edge.push_back({i,j});
			}
		}
	}
	
	for(auto x : edge)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}*/
	
//	Chuyen tu ma tran ke sang danh sach ke;
	vector<int> adj[100];
	int a[100][100];
	for(int i=1;i<=n;i++)
	{
		cout<<"dong:"<<i<<":"<<endl;
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j] == 1 )
			{
				adj[i].push_back(j);
			}
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		cout<<i<<":";
		for(int  x : adj[i])
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}
	

	return 0;
}
