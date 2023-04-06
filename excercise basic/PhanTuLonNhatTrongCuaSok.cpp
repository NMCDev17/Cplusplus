#include<iostream>
#include<algorithm>
#include<deque>
#include<set>
using namespace std;

int main()
{
	int n,k;cin>>n>>k;
	int a[n];
	for(int &x : a) cin>>x;	
/*	for(int i = 0; i <= n - k; i++)
	{
		int tmp = a[i];
		for(int j = i; j < k + i; j++)
		{
			tmp = max(tmp,a[j]);
		}
		cout<<tmp<<" ";
	}*/
	
	/*multiset<int> s;
	
	for(int i = 0; i < k; i++)
	{
		s.insert(a[i]);
	}
	cout<<*s.rbegin()<<" ";
	for(int j = k; j <= n - 1; j++)
	{
		s.erase(s.find(a[j-k]));
		s.insert(a[j]);
		cout<<*s.rbegin()<<" ";
	}*/
	
	deque<int> q;
	for(int i = 0; i < k; i++)
	{
		q.push_back(i);
		
	}
	return 0;
}
