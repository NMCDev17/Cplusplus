#include <iostream>
#include <algorithm>
using namespace std;

int partision(int a[],int l,int r)
{
    int pivot = a[l];
    int i = l - 1, j = r + 1;
    while(1)
    {
        do{
            i++;
        }while(a[i] < pivot);
        do{
            j--;
        }while(a[j] > pivot);
        if(i < j)
        {
            swap(a[i],a[j]);
        }
        else{
            return j;
        }
    }
}

void QuickSort(int arr[],int l,int r)
{
    if(l >= r) return;
    int count = 0;
    int m = partision(arr,l,r);
    QuickSort(arr,l,m);
    QuickSort(arr,m+1,r);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    cout << "Mang vua nhap la: ";
    for (int x : a)
        cout << x << " ";
    cout << "\nMang sap xep theo chieu tang dan la: ";
    QuickSort(a, 0, n - 1);
    for (int x : a)
        cout << x << " ";
    return 0;
}