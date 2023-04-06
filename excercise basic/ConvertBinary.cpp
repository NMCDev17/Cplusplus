#include<iostream>
#include<string>
#include<cmath>
using namespace std;


void ConvertBinary(string &a) {
    long result = 0;
    for(int x = 0 ;x < a.length();x++)
    {
        if(a[x] == '0')
        {
            a[x] = '1';
        }
        else {
            a[x] = '0';
        }
    }
    int i = 0;
    cout<<a<<endl;
    for(int x = a.length() - 1 ; x >= 0;x--)
    {
        if(a[x] == '1')
        {
            result +=  pow(2,i);
        }
        i++;
    }
    cout<<result<<endl;
}

int main()
{
    int n;cin>>n;cin.ignore();
    while(n > 0)
    {
    	string st;getline(cin,st);
		ConvertBinary(st);
    	n--;
    }
    return 0;
}
