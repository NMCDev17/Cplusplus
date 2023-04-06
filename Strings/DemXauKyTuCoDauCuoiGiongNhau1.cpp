#include<iostream>
#include<sstream>
#include<string>
#include<map>
using namespace std;


int main()
{
	int t;cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		map<char,int> mp;
		for(char x : s)
		{
			mp[x]++;
		}
		long long ans = s.length();
		for(auto x : mp)
		{
			ans += x.second * (x.second - 1) / 2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
