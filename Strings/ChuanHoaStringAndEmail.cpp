#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;


int main()
{
	int n;cin>>n;cin.ignore();
	while(n--)
	{
		string s;
		getline(cin,s);
		for(int i = 0 ; i< s.length();i++)
		{
			s[i] = tolower(s[i]);
		}
		stringstream ss(s);
		string word;
		vector<string> v;
		while(ss >> word) v.push_back(word);
		cout<<v[v.size()-1];
		for(int i = 0 ;i < v.size() - 1;i++)
		{
			cout<<v[i][0];
		}
		cout<<"@gmail.com"<<endl;
	}
	return 0;
}
