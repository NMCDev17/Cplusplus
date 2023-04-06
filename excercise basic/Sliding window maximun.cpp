#include<iostream>
#include<deque>
#include<set>
#include<algorithm>
using namespace std;


int main()
{
	int n,k;cin>>n>>k;
	int a[n];
	for(int &x : a) cin>>x;
/*	for(int i = 0 ; i <= n - k; i++)
	{
		int temp = a[i];
		for(int j = i; j < k + i; j++)
		{
			temp = max(temp,a[j]);
		}
		cout<<temp<<" ";
	}*/
	cout<<endl;
	multiset<int> s;
	for(int i = 0 ;i < k; i++)
	{
		s.insert(a[i]);
	}
	cout<<*s.rbegin()<<" ";
	
	for(int j = k; j < n; j++)
	{
		s.erase(s.find(a[j-k]));
		s.insert(a[j]);
		cout<<*s.rbegin()<<" ";
	}
	cout<<endl;
/*	deque<int> q;
	for(int i = 0; i < k; i++)
	{
		while(!q.empty() && a[i] >= a[q.back()])
		{
			q.pop_back();
		}
		q.push_back(i);
	}
	cout<<a[q.front()]<<" ";
	for(int j = k; j <= n - 1; j++)
	{
		if(q.front() <= j - k)
		{
			q.pop_front();
		}
		while(!q.empty() && a[j] >= a[q.back()])
		{
			q.pop_back();
		}
		q.push_back(j);
		cout<<a[q.front()]<<" ";
	}*/
	return 0;
}
