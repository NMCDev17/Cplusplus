#include<iostream>
#include<algorithm>
using namespace std;


void SelectionSort(int *a,int n){
	for(int i = 0 ; i < n - 1 ;i++)
	{
		int min_pos = i;
		for(int j = i+1 ;j < n ;j++)
		{
			if(a[j] < a[min_pos])
			{
				min_pos = j;
			}
		}
		swap(a[i],a[min_pos]);
	}
}

int main()
{
	int n;cin>>n;
	int a[n];
	for(int i = 0 ;i < n; i++)
	{
		cin>>a[i];
	}
	SelectionSort(a,n);
	for(int x : a)
	{
		cout<<x<<" ";
	}
	return 0;
}