#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

int n,m;
vector<int> a[100];
bool visited[100];
vector<int> topo;
//7 7
//1 2
//1 6
//2 3
//2 4
//3 5
//4 5
//7 6
void Topo(int u)
{
	visited[u] = true;
	for(int x : a[u])
	{
		if(!visited[x])
		{
			Topo(x);
		}
	}
	topo.push_back(u);
}
void input()
{
	cin>>n>>m;
	for(int i = 1 ;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
	}
	memset(visited,false,sizeof(visited));
}
int main()
{
	input();
	
	for(int i = 1;i<=n;i++)
	{
		if(!visited[i])
		{
			Topo(i);
		}
	}
	
	reverse(topo.begin(),topo.end());
	for(int x : topo)
	{
		cout<<x<<" ";
	}
	return 0;
}
