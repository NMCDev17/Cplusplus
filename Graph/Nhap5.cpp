#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int n, m;
vector<int> a[100];
bool visited[100];
vector<int> topolist;

void Dfs(int u)
{
    visited[u] = true;
    for (int x : a[u])
    {
        if (!visited[x])
        {
            Dfs(x);
        }
    }
    topolist.push_back(u);
}

void input()
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
int main()
{
    input();
    Dfs(1);
    reverse(topolist.begin(), topolist.end());
    for (int x : topolist)
    {
        cout << x << " ";
    }
    return 0;
}