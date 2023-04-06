#include<iostream>
#include<fstream>
using namespace std;

bool Check(int n)
{
	int sum = 0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		sum+=i;
	}
	if(sum == n)
	{
		return true;
	}
	return false;
}

void Doc_Va_In()
{
	ifstream in;
	in.open("Input.txt",ios_base::in);
	ofstream out;
	out.open("Output.txt",ios_base::out);
	int a[10],i=0;
	while(!in.eof())
	{
		in>>a[i];
		if(Check(a[i]))
		{
			out<<"Yes"<<endl;
		}
		else
		{
			out<<"No"<<endl;
		}		
	}
	in.close();
	out.close();
}
int main()
{
	Doc_Va_In();
	return 0;
}
