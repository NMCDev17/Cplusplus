#include<iostream>
#include<vector>
#include<set>
using namespace std;


int main()
{
    int n;cin>>n;
    vector<int> a(n);
    set<int> st;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        st.insert(a[i]);
    }
    for(int i = 1; i < n; i++)
    {
        int sum = a[i];
        for(int j = 0; j < i; j++)
        {
            sum += a[j];
            st.insert(a[i] + a[j]);
            st.insert(sum);
        }
    }
    cout<<st.size()<<endl;
    for(int x : st) cout<<x<<" ";
    return 0;
}