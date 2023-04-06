// C++ implementation of Shell Sort
#include <iostream>
using namespace std;

/*Function su dung thuat toan shell sort*/
int shellSort(int arr[], int n)
{
    // Start with a big gap, then reduce the gap
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        cout << "\ngrap: " << gap << endl;
        for (int i = gap; i < n; i += 1)
        {
            cout << "arr[" << i << "]: " << arr[i] << endl;
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                cout << "j: " << j << " ";
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
            cout << "arr[" << j << "]: " << arr[j] << " " << endl;
            for (int k = 0; k < n; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {12, 34, 54, 2, 3}, i;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: \n";
    printArray(arr, n);

    shellSort(arr, n);

    cout << "\nArray after sorting: \n";
    printArray(arr, n);

    return 0;
}
