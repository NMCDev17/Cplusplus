#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;


void VietHoa(string &s)
{
	for(int i = 0; i < s.size(); i++)
	{
		s[i] = toupper(s[i]);
	}
}

void ChuanHoa(string &s)
{
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
}
int main()
{
	int t;cin>>t;cin.ignore();
	while(t--)
	{
		string s;getline(cin,s);
		stringstream ss(s);
		string word;
		vector<string> v;
		while(ss >> word)
		{
			v.push_back(word);
		}
		for(int i = 0; i < v.size() - 1; i++)
		{
			ChuanHoa(v[i]);
			cout<<v[i];
			if(v[i] == v[v.size() - 2])
				cout<<", ";
			else
				cout<<" ";
		}
		VietHoa(v[v.size() - 1]);
		cout<<v[v.size() - 1]<<endl;
	}
	return 0;
}
