#include<iostream>
#include<stack>
using namespace std;


int main()
{
 /*Chuyen doi so thap phan sang nhi phan*/
	stack<int> convert;
	int n;
	int chso;
	cout<<"Nhap vao so thap phan muon chuyen doi:";cin>>n;
	while(n!=0)
	{
		chso = n % 2;
		convert.push(chso);
		n/=2;
	}
	
	while(!convert.empty())
	{
		cout<<convert.top();
		convert.pop();
	}
	return 0;
	
	
}
