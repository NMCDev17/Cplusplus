#include <iostream>
using namespace std;

int search(int a[], int n, int x, int index)
{
    if (index == n)
    {
        return -1;
    }
    if (a[index] == x)
    {
        return index;
    }
    else
    {
        index++;
        search(a, n, x, index);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int result = search(a, n, x, 0);
    cout << result << " " << endl;
    return 0;
}