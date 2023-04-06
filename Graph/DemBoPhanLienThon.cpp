#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

// 10 8
// 1 2
// 2 3
// 2 4
// 3 6
// 3 7
// 6 7
// 5 8
// 8 9
int n, m;
vector<int> a[100];
bool visited[100];

void dfs(int u)
{
	visited[u] = true;
	cout << u << " ";
	for (int x : a[u])
	{
		if (!visited[x])
		{
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
		cout << v << " ";
		b.pop();
		for (int x : a[v])
		{
			if (!visited[x])
			{
				visited[x] = true;
				b.push(x);
			}
		}
	}
}
void connectionpart(int n)
{
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (!visited[i])
		{
			count++;
			cout << "Cac dinh thuoc bo phan lien thong thu " << count << " la:";
			bfs(i);
			cout << endl;
		}
	}
	if (count == 1)
	{
		cout << "Do thi lien thong!";
	}
	else
	{
		cout << "Do thi khong lien thong!";
		cout << "So bo phan lien thong trong do thi la:" << count;
	}
	//	cout<<"So bo phan lien thong trong do thi la:"<<count;
}
int main()
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
	connectionpart(n);
	return 0;
}
