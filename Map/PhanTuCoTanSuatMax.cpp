#include<iostream>
#include<map>
using namespace std;


int main()
{
	multimap<int,int> mp;
	
	//chen 1 key value vao multimap
	mp.insert({100,200});
	mp.insert({200,300});
	mp.insert({300,400});
	
	mp.erase(100);//xoa key 100;
	
	//xuat multimap;
	for(auto x : mp)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
	
	//tim kiem 1 key trong map;
	if(mp.count(500))
	{
		cout<<"YES"<<endl;
	}
	else {
		cout<<"No"<<endl;
	}
	return 0;
}
