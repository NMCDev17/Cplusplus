#include <iostream>
using namespace std;

void shellSort(int a[], int n)
{
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; ++i)
        {
            int temp = a[i];
            int j;
            for (j = i; j >= gap && a[j - gap] > temp; j -= gap)
            {
                a[j] = a[j - gap];
            }
            a[j] = temp;
        }
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[] = {2, 6, 9, 22, 66, 11, 72};
    int n = sizeof(a) / sizeof(a[0]);
    shellSort(a, n);
    printArray(a, n);
    return 0;
}