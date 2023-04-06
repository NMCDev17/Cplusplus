#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

void countingSort(vector<int> arr) {
    vector<int> count(0);
    int m = INT_MIN;
    for(int i = 0; i < arr.size(); i++)
    {
        count[arr[i]]++;
        m = max(m,arr[i]);
    }
    for(int i = 0; i <= m; i++)
    {
    	if(count[i] != 0)
    	{
	        for(int j = 1; j <= count[i]; j++)
	        {
	            cout<<i<<" ";
	        }
		}
    }
}

int main()
{
	int n;cin>>n;
	vector<int> arr;
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	countingSort(arr);
	return 0;
}
