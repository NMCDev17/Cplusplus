#include<iostream>
#include<map>
using namespace std;

int main()
{
	int n;cin>>n;
	int a[n];
	map<int,int> mp;
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		
		//dem so lan xuat hien trong mang
		for(int x : a)
		{
			mp[x]++;
		}
		
		// tim phan tu co so lan xuat hien nhieu nhat trong mang
		int rel = 0;
		int temp;
		for(auto x : mp)
		{
			if(x.second > rel)
			{
				rel = x.second;
				temp = x.first;
			}
		}
		cout<<temp<<" "<<rel<<endl;
	return 0;	
}

