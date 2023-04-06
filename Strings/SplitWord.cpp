#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;


int main()
{
	int n;cin>>n;cin.ignore();
	string s[100];
	for(int i = 0 ;i < n ;i++)
	{
		getline(cin,s[i]);
	}
	
	for(int i = 0 ;i < n ;i++)
	{
		stringstream ss(s[i]);
		string word;
		int cnt = 0;
		vector<string> st;
		while(ss >> word)
		{
			cnt++;
			st.push_back(word);
		}
		cout<<cnt<<endl;
		for(string x : st)
		{
			cout<<x<<endl;
		}
	}
	return 0;
}
