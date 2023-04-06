#include <iostream>
using namespace std;

int binarySearch(int a[], int l, int r, int x)
{
    int pos = -1;
    while (l <= r)
    {
        int mid = (r + l) / 2;
        if (a[mid] == x)
        {
            pos = mid;
            r = mid - 1;
        }
        else if (a[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return pos;
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
    int pos = binarySearch(a, 0, n - 1, x);
    if (pos != -1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}