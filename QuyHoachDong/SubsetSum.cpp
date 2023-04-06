#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s;
    cin >> s;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<bool> dp(s+1,false);
    dp[0] = true;
    for(int i = 1; i < n; i++)
    {
        for(int j = s; j >= i; j--)
        {
            if(dp[j - a[i]])
            {
                dp[j] = true;
            }
        }
    }
    if(dp[s])
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}