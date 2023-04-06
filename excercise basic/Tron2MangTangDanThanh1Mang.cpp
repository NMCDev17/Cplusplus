#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;


void Merge(int a[],int b[],int n,int k)
{
	vector<int> c;
	int i = 0,j = 0;
	sort(a,a+n);
	sort(b,b+k);
	while(i < n && j < k)
	{
		if(a[i] <= b[j] )
		{
			c.push_back(a[i]);
			i++;
		}
		else
		{
			c.push_back(b[j]);
			j++;
		}
	}
	while(i < n)
	{
		c.push_back(a[i]);i++;
	}
	while( j < k)
	{
		c.push_back(b[j]);j++;
	}
	
	for(int x : c)
	{
		cout<<x<<" ";
	}
}
int main(){
	int n,k;cin>>n;
	int a[100],b[100];
	for(int i = 0 ;i < n ;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	for(int i = 0 ; i < k ; i++)
	{
		cin>>b[i];
	}
	
	Merge(a,b,n,k);
	return 0;
}
