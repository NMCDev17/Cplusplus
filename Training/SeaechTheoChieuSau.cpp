#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;


void dfs(int u,vector<vector<int>> a, vector<bool> &visited, vector<int> &parent)
{
    visited[u] = true;
    for(int x : a[u])
    {
        if(!visited[x])
        {
            parent[x] = u;
            dfs(x,a,visited,parent);
        }
    }
}
void input(vector<vector<int>> &a, int m)
{
    for(int i = 1; i <= m; i++)
    {
        int x, y;cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}
int main()
{
    int n,m,u,v;
    cin>>n>>m;
    vector<vector<int>> a(n+1);
    vector<bool> visited(n+1,false);
    vector<int> parent(n+1,0);
    input(a,m);
    cin>>u>>v;
    dfs(u,a,visited,parent);
    if(!visited[v])
    {
        cout<<"Khong co duong di!";
    }
    else{
        vector<int> path;
        while(v != u)
        {
            path.push_back(v);
            v = parent[v];
        }
        path.push_back(u);
        reverse(path.begin(),path.end());
        for(int x : path) cout<<x<<" ";
    }
    return 0;
}