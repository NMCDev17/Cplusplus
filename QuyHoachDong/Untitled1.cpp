#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'flippingBits' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */

long flippingBits(long n) {
    return (n^(0xffffffff));
}
int main()
{
    int q;cin>>q;
    while(q > 0)
    {
        q--;      
        long n;cin>>n;
        long result = flippingBits(n);
        cout<<result<<endl;
    }
    return 0;
}

