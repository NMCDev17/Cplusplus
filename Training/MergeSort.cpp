#include <iostream>
#include <vector>
using namespace std;

void merge(int a[], int l, int mid, int r)
{
    vector<int> x(a + l, a + mid + 1);
    vector<int> y(a + mid + 1, a + r + 1);
    int i = 0, j = 0;
    while (i < x.size() && j < y.size())
    {
        if (x[i] <= y[j])
        {
            a[l] = x[i];
            ++l;
            ++i;
        }
        else
        {
            a[l] = y[j];
            ++l;
            ++j;
        }
    }
    while (i < x.size())
    {
        a[l] = x[i];
        ++l;
        ++i;
    }
    while (j < y.size())
    {
        a[l] = y[j];
        ++l;
        ++j;
    }
}
void mergeSort(int a[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, r);
    merge(a, l, mid, r);
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}