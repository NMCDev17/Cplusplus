#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){
	int n;cin>>n;
	int a[100];
	map<int,int> cnt;//luu tan suat xuat hien cua 1 phan tu trong mang;
	for(int i = 0 ;i < n; i++)
	{
		cin>>a[i];
		cnt[a[i]]++;
	}
	for(auto x : cnt)
	{
		//xuat ra phan tu xuat hien trong mang voi so tan suat cua no;
		if(x.second != 0)
		{
			for(int i = 0 ; i < x.second ; i++)
			{
				cout<<x.first<<" ";
			}
		}
	}
return 0;
}
