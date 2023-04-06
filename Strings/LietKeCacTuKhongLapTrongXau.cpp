#include<iostream>
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
		map<char,int> svc;
		
		//dem tan suat xuat hien cua cac ky tu trong xau;
		for(char x : s)
		{
			svc[x]++;
		}
		
		for(auto x : svc)
		{
			if(x.second == 1)
			{
				cout<<x.first;
			}
		}
		cout<<endl;
	}
	return 0;
}
