#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;

// 7 7
// 1 2
// 2 3
// 2 5
// 3 4
// 4 5
// 4 7
// 5 6
// 1 7

int n, m, u, v;
vector<int> a[100];
bool visited[100];
int parent[100];

void input(int n, int m)
{
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	memset(parent, 0, sizeof(parent));
}

void dfs(int u)
{
	visited[u] = true;
	for (int x : a[u])
	{
		if (!visited[x])
		{
			parent[x] = u;
			dfs(x);
		}
	}
}

void bfs(int u)
{
	queue<int> b;
	b.push(u);
	visited[u] = true;
	while (!b.empty())
	{
		int v = b.front();
		b.pop();
		for (int x : a[v])
		{
			if (!visited[x])
			{
				b.push(x);
				visited[x] = true;
				parent[x] = v;
			}
		}
	}
}

void Path(int u, int v)
{
	bfs(u);
	if (!visited[v])
	{
		cout << "Khong co duong di!";
	}
	else
	{
		vector<int> path;
		// Lan nguoc lai;
		while (v != u)
		{
			path.push_back(v);
			v = parent[v];
		}
		path.push_back(u);
		reverse(path.begin(), path.end());
		for (int x : path)
		{
			cout << x << " ";
		}
	}
}
int main()
{
	input(n, m);
	cin >> u >> v;
	Path(u, v);
	return 0;
}
