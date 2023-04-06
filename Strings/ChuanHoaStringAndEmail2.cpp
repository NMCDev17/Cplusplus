#include<iostream>
#include<map>
#include<sstream>
#include<string>
#include<vector>
using namespace std;


int main()
{
	int t;cin>>t;
	cin.ignore();
	map<string,int> mp;
	while(t--)
	{
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss >> tmp) v.push_back(tmp);
		string res = "";
		res +=v[v.size() - 1];
		for(int j = 0; j < v.size() - 1; j++)
		{
			res += v[j][0];
		}
		if(mp.count(res) == 0)
		{
			cout<<res<<"@gmail.com"<<endl;
		}
		else
		{
			cout<<res<<mp[res]<<"@gmail.com"<<endl;
		}
		mp[res]++;
	}
	return 0;
}
