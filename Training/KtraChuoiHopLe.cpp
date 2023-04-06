#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str;
    cin >> str;
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
            st.push(str[i]);
        else if (str[i] == ')' && st.top() == '(' && !st.empty())
            st.pop();
        else if (str[i] == ']' && st.top() == '[' && !st.empty())
            st.pop();
        else if (str[i] == '}' && st.top() == '{' && !st.empty())
            st.pop();
        else
            st.push(str[i]);
    }
    cout << endl;
    if (st.empty())
        cout << "Chuoi hop le!" << endl;
    else
        cout << "Chuoi khong hop le!" << endl;
    return 0;
}