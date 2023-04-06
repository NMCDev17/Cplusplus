#include <iostream>
#include <string>
#include <map>
using namespace std;

struct list
{
    int data;
    list *l = NULL;
    list *r = NULL;
};

typedef list *List;

List makeNode(int data)
{
    List tmp = new list;
    tmp->data = data;
    tmp->l = NULL;
    tmp->r = NULL;
    return tmp;
}

void addNode(List &tr, int data)
{
    List tmp = makeNode(data);
    if (tr == NULL)
    {
        tr = tmp;
    }
    else
    {
        tmp->l = tr;
        tr = tmp;
    }
}

int main()
{
    string str;
    getline(cin, str);
    map<char, int> mp;
    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
