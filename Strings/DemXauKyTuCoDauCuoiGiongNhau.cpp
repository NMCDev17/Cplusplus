#include<iostream>
#include<sstream>
#include<map>
#include<string>
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
			mp[x]++; // dem tan xuat xuat hien cua cac tu;
		}		
		long long ans = s.length(); // xau co 1 ky tu thi ce co dau cuoi giong nhau;
		for(auto x : mp)
		{
			ans += x.second * (x.second - 1) / 2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
