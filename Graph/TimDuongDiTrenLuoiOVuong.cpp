#include<iostream>
#include<queue>
using namespace std;

//6 6
//Aooxoo
//oxoooo
//oxoooo
//ooooxx
//Boooxo
//oooxxx

/*1 2
2 1
1 3
3 1
2 3
4 1
2 4
3 3
4 2
5 1*/
int n,m,x1,y1,x2,y2;
char a[100][100];
int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};
int count[100][100];

bool dfs(int i,int j)
{
	if(a[i][j] == 'B')
	{
		return true;
	}
	a[i][j] = 'x';
	for(int k = 0 ;k < 4 ;k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >=1 && j1 <= m && a[i1][j1] != 'x')
		{
			if(dfs(i1,j1)) return true;
		}
	}
	return false;
}

void bfs(int i,int j)
{
	queue<pair<int,int>> b;
	b.push({i,j});
	a[i][j] = 'x';
	count[i][j] = 0;
	while(!b.empty())
	{
		pair<int,int> top = b.front();
		b.pop();
		for(int k = 0 ;k < 4 ; k++)
		{
			int i1 = top.first + dx[k];
			int j1 = top.second + dy[k];
			if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] !='x')
			{
				count[i1][j1] = count[top.first][top.second] + 1;
				cout<<i1<<" "<<j1<<endl;
				if(a[i1][j1] == 'B') return;
				b.push({i1,j1});
				a[i1][j1] = 'x';
			}
		}
	}
}
void input()
{
	cin>>n>>m;
	for(int i = 1 ; i <= n ;i++)
	{
		for(int j = 1; j <= m ; j++)
		{
			cin>>a[i][j];
			if(a[i][j] == 'A')
			{
				x1 = i;
				y1 = j;
			}
			if(a[i][j] == 'B')
			{
				x2= i;
				y2 = j;
			}
		}
	}
	//Kiem tra xem co duong di hay khong;
/*	if(dfs(x1,y1))
	{
		cout<<"Co duong di!"<<endl;
	}
	else
	{
		cout<<"Khong co duong di!"<<endl;
	}*/
	
	bfs(x1,y1);
//	do dai duong di toi thieu;
//	if(!count[x2][y2])
//	{
//		cout<<"Khong co duong di!"<<endl;
//	}
//	else
//	{
//		cout<<"So buoc di la:"<<count[x2][y2]<<endl;
//	}
}
int main()
{
	input();
	return 0;
}
