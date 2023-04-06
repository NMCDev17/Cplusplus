#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;

int n, m;
char a[100][100];
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };

void dfs(int i, int j)
{
	a[i][j] = 'o';
	cout << i << " " << j << endl;
	for (int k = 0; k < 4; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (j1 >= 1 && j1 <= m && i1 >= 1 && i1 <= n && a[i1][j1] == 'x')
		{
			dfs(i1, j1);
		}
	}
}

void input()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			 cin >> a[i][j];
		}
	}
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (a[i][j] == 'x')
			{
				cout << "Thanh phan lien thong thu " << count + 1 << " :" << endl;
				count++;
				dfs(i, j);
			}
		}
	}
	cout << "So bo phan lien thong la: " << count;
}
int main()
{
	input();
	return 0;
}