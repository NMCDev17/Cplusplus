#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include<map>
using namespace std;


int main()
{
	int t;cin>>t;cin.ignore();
	while(t--)
	{
		string s;
		cin>>s;
		map<char,int> mp;
		for(int i = 0; i < s.length(); i++)
		{
			mp[s[i]]++;
		}
		for(auto x : mp)
		{
			if(x.second == 1)
			{
				cout<<x.first<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
