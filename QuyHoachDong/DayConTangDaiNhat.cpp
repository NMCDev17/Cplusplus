#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int n;cin>>n;
	vector<int> a(n);
	vector<int> l(n,1);
	/*l[i] la do dai cua day con tang dai nhat tai vi tri i;
	l[i] = max(l[i], l[j] + 1);*/
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(a[i] > a[j])
			{
				l[i] = max(l[i], l[j] + 1);
			}
		}
	}
	cout<<*max_element(l.begin(),l.end());
	return 0;
}
