#include <iostream>
#include <algorithm>
using namespace std;

int FirstPost(int a[], int n, int k)
{
    int l = 0;
    int r = n - 1;
    int pos = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == k)
        {
            pos = mid;
            l = mid + 1;
        }
        else if (a[mid] > k)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return pos;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    int k;
    cin >> k;
    auto pos = upper_bound(a, a + n, k);
    int po = FirstPost(a, n, k);
    cout << "Upper_bound: " << pos - a << endl;
    cout << "Binary search: " << po << " " << po + 1 << endl;
}