#include <iostream>
#include <vector>
#include <cstring>
#include <fstream>
using namespace std;
// input:
// 10 11
// 1 2
// 1 3
// 1 5
// 1 10
// 2 4
// 3 6
// 3 7
// 3 9
// 6 7
// 5 8
// 8 9
// output: 1 2 4 3 6 7 9 8 5 10;
int n, m;
vector<int> a[100];
bool visited[100];
void input(int n, int m)
{
	fstream input;
	input.open("InputDFS.txt", ios_base::in);
	input >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		int x, y;
		input >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
	input.close();
}

void dfs(int u)
{
	cout << u << " ";
	visited[u] = true;
	for (int x : a[u])
	{
		if (!visited[x])
		{
			dfs(x);
		}
	}
}

int main()
{
	input(n, m);
	dfs(1);
	return 0;
}
