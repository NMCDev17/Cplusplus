#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
	int n;cin>>n;
	vector<int> a(n);
	vector<int> count(100,0);
	int m = 0;
	for(int i = 0; i < n; i++){
		cin>>a[i];
		count[a[i]]++;
		m = max(m,a[i]);
	}
	for(int i = 0; i <= m; i++)
	{
		if(count[i] != 0)
		{
			for(int j = 1; j <= count[i]; j++)
			{
				cout<<i<<" ";
			}
		}
	}
return 0;
}
