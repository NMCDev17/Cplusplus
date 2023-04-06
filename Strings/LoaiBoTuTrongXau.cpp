#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;



int main()
{
	int n;cin>>n;cin.ignore();
	string s[100];
	string st[100];
	for(int i = 0 ; i < n ;i++)
	{
		getline(cin,s[i]);
		cin>>st[i];cin.ignore();	
		stringstream ss(s[i]);
		string word;
		vector<string> v;
		while(ss >> word)
		{
			if(word != st[i])
			{
				v.push_back(word);
			}
		}	
		for(int j = 0 ;j < v.size();j++)
		{
			cout<<v[j];
			if(j != (v.size() - 1))
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
