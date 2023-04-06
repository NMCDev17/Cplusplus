#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;

string timeConversion(string s) {
    stringstream ss(s);
    stringstream st;
    int word;
    vector<int> store;
    //Tach cach so trong xau de chuan hoa;
    while(ss >> word)
    {
        store.push_back(word);
        char c;
        ss >> c;
    }
    //Chuan hoa sang gio 24hour;
    if(store[0] == 12)
    {
        store[0] = store[0] - 12;
    }
    if(s[s.length() - 2] == 'P')
        store[0] = store[0] + 12;
    string result;
    string temp ;
    //Chuan hoa hour, minute, second;
    for(int i = 0;i < store.size(); i++)
    {
        if(store[i] - 10 < 0)
        {
            st << '0' << store[i];
        }
        else{
            st << store[i];
        }
        if(i != store.size() - 1)
            st << ':';
    }
    st >> temp;
    result = temp;
    return result;
}

int main()
{
	string s;cin>>s;
	string result = timeConversion(s);
	cout<<result<<endl;
	return 0;
}
