#include<iostream>
#include<fstream>
using namespace std;

int UCLN(int a,int b)
{
	if(a==0||b==0)
	{
		return a;
	}
	else
	{
		while(a!=b)
		{
			if(a<b)
				b=b-a;
			else
				a=a-b;
		}
		return a;
	}
}

void Doc()
{
	fstream input;
	input.open("C:\\Users\\cuong\\Desktop\\InPut.txt",ios_base::in);
	fstream output;
	output.open("C:\\Users\\cuong\\Desktop\\Output.txt",ios_base::out);
	int n,a,b;
	input>>n;
	for(int i=0;i<n;i++)
	{
		input>>a>>b;
		int tich =a*b;
		int uc = UCLN(a,b);
		output<<(tich)/uc;
	}
	input.close();
	output.close();
}
int main()
{
	Doc();
	return 0;
}
