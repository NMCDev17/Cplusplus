#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;

int n,m,st,en;
vector<int> a[100];
bool visited[100];
int parent[100];

bool Dfs(int u)
{
	visited[u] = true;
	for(int x : a[u])
	{
		if(!visited[x])
		{
			parent[x] = u;
			if(Dfs(x)) return true;
		}
		else if(x != parent[u])
		{
			st = u; en = x;
			return true;
		}
	}
	return false;
}

bool Bfs(int u)
{
	queue<int> b;
	b.push(u);
	visited[u] = true;
	while(!b.empty())
	{
		int top = b.front();
		b.pop();
		for(int x : a[top])
		{
			if(!visited[x])
			{
				visited[x] = true;
				parent[x] = top;
				b.push(x);
			}
			else if(x != parent[top])
			{
				return true;
			}
		}
	}
	return false;
}
void input()
{
	cin>>n>>m;
	for(int i = 0 ;i < m ;i++)
	{
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}
int main()
{
	input();
	if(Bfs(1))
	{
		cout<<"YES"<<endl;
//		vector<int> sv;
//		sv.push_back(en);
//		while(st != en)
//		{
//			sv.push_back(st);
//			st = parent[st];
//		}
//		sv.push_back(en);
//		reverse(sv.begin(),sv.end());
//		for(int x : sv)
//		{
//			cout<<x<<" ";
//		}
	}
	else
	{
		cout<<"No"<<endl;
	}
	return 0;
}
