#include <iostream>
#include <algorithm>
using namespace std;

// Phan hoach lomuto;
int partition(int arr[], int left, int right)
{
        int i = left - 1;
        int pivot = arr[right];
        for (int j = left; j < right; ++j) {
            if (arr[j] < pivot) {
                ++i;
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
        ++i;
        int tmp = arr[i];
        arr[i] = arr[right];
        arr[right] = tmp;
        return i;
	return i; // vi tri
}

int partition2(int arr[], int left, int right)
{
        int i = left, j = right;
        int pivot = arr[left];
        while (i < j) {
            while (arr[i] < pivot) {
                ++i;
            }
            while (arr[j] > pivot) {
                --j;
            }
            if (i < j) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
                ++i;
                --j;
            } else {
                break;
            }
        }
        return j;
}
void quickSort(int a[], int l, int r)
{
	if (l >= r)
		return;
	int p = partition(a, l, r);
	// Phan hoach lomuto
	quickSort(a, l, p-1);
	quickSort(a, p + 1, r);
	// Phan hoach tacgia;
/*	quickSort(a,l,p);
	quickSort(a,p+1,r);*/
}

int main()
{
	int n;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	quickSort(a, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
