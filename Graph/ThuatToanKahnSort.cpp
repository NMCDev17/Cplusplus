#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<int> a[100];
int step[100];
vector<int> kahn;
// 7 7
// 1 2
// 1 6
// 2 3
// 2 4
// 3 5
// 4 5
// 7 6
void Kahn()
{
	queue<int> b;
	for (int i = 1; i <= n; i++)
	{
		if (step[i] == 0)
		{
			b.push(i);
		}
	}

	while (!b.empty())
	{
		int top = b.front();
		b.pop();
		kahn.push_back(top);
		for (int x : a[top])
		{
			step[x]--;
			if (step[x] == 0)
			{
				b.push(x);
			}
		}
	}
}

void input()
{
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		step[y]++;
	}
}
int main()
{
	input();
	Kahn();
	for (int x : kahn)
	{
		cout << x << " ";
	}
	return 0;
}
