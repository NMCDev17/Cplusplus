#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int cnt[100];
int main()
{
	int n;cin>>n;
	int a[100];
	int m = INT_MIN;
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
		cnt[a[i]]++;
		m = max(m,a[i]);
	}
	
	for(int i = 0 ; i <= m ;i++)
	{
		if(cnt[i] != 0 )
		{
			for(int j = 0 ; j < cnt[i] ;j++)
			{
				cout<<i<<" ";
			}
		}
	}
	return 0;
}
