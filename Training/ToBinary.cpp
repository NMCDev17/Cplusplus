#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> st;
    while (n != 0)
    {
        int chuso = n % 2;
        st.push(chuso);
        n = n / 2;
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}