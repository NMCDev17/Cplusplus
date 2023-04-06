#include<iostream>
using namespace std;


void maxHeap(int arr[],int n, int i)
{
    int l = 2 * i + 1;//node con ben trai;
    int r = 2 * i + 2;//node con ben phai;
    int largest = i;// node lon nhat ban dau la node cha;

// Neu node cha co con ben trai va node con ben trai la node lon nhat 
// thi ta se cap nhat node lon nhat la node con ben trai;
    if(l < n && arr[l] > arr[largest])
        largest = l;

// Neu node cha co con ben phai va node con ben phai la node lon nhat 
// thi ta se cap nhat node lon nhat la node con ben phai;
    if(r < n && arr[r] > arr[largest])
        largest = r;

//  Neu node lon nhat k phai node cha thi ta se hoan doi vi tri node do;
    if(largest != i)
    {
        //hoa doi vi tri cua node lon nhat voi nhat cha;
        swap(arr[i],arr[largest]);
        
        //Tiep tuc xay dung maxheap tu vi tri node lon nhat do;
        maxHeap(arr,n,largest);
    }
}

void HeapSort(int arr[], int n)
{
    for(int i = n/2 - 1; i >= 0; --i)
    {
        //Xay dung maxheap;
        maxHeap(arr,n,i);
    }

    for(int i = n - 1; i >= 0; --i)
    {
        //Dua node lon nhat luc nay la node goc ve cuoi day;
        swap(arr[i],arr[0]);

        //Xay dung lai maxheap bat dau tu node goc;
        maxHeap(arr,i,0);
    }
}
int main()
{
    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
   HeapSort(arr,5);
    for(int i = 0; i < 5; ++i)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}