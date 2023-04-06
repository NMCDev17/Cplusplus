#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

vector<int> b[100];
int n,m;
bool visited[100];

void input(int n,int m)
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		b[x].push_back(y);
		b[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}

void dfs(int u)
{
	cout<<u<<" ";
	visited[u] = true;
	for(int x : b[u])
	{
		if(!visited[x])
		{
			dfs(x);
		}
	}
}

int main()
{
	input(n,m);
	dfs(1);
	return 0;
}
