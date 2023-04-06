#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

// input
//  10 11
//  1 2
//  1 3
//  1 5
//  1 10
//  2 4
//  3 6
//  3 7
//  3 9
//  6 7
//  5 8
//  8 9

vector<int> a[100];
bool visited[100];
int n, m;

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
}

void bfs(int u)
{
	queue<int> b;
	b.push(u);
	visited[u] = true;
	while (!b.empty())
	{
		int v = b.front(); // lay dinh o dau hanh doi;
		b.pop();
		cout << v << " ";
		for (int x : a[v])
		{
			if (!visited[x])
			{
				b.push(x);
				visited[x] = true;
			}
		}
	}
}
int main()
{
	input(n, m);
	bfs(1);
	return 0;
}
