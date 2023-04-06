#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;

bool Xuli(int n)
{
	int dau,cuoi=n%10;
	while(n!=0)
	{
		dau=n%10;
		n/=10;
	}
	
	if(dau == cuoi)
		return true;
	else
		return false;
}

bool kiemTraChuoi(char n[])
{
	int len = strlen(n);
	for(int i=0;i<len/2;i++)
	{
		if(n[i] == n[len-i-1])
			return true;
		else
			return false;
	}
}

void DocChuoi()
{
	fstream input;
	input("C:\\Users\\cuong\\Desktop\\Input.txt",ios_base::in);
	fstream output;
	output("C:\\Users\\cuong\\Desktop\\Output.txt",ios_base::out);
	string str[2];
	int i=0,dem=0;
	while(!input.eof())
	{
		input>>str[i];
		i++;
		dem++;
	}
	for(int j=0;j<dem;j++)
	{
		output<<str[j]<<endl;
	}
}
void Doc()
{
	fstream input;
	input.open("C:\\Users\\cuong\\Desktop\\Input.txt",ios_base::in);
	fstream output;
	output.open("C:\\Users\\cuong\\Desktop\\Output.txt",ios_base::out);
	int x,y[6];
	//input>>x;//cho trc bo test la x
	/*for(int i=0;i<x;i++)
	{
		input>>y[i];
	}
	for(int j=0;j<x;j++)
	{
		if(Xuli(y[j]))
			output<<"Yes"<<endl;
		else
		output<<"No"<<endl;		
	}*/
	int i=0,dem=0;
	while(!input.eof()) // khong cho trc so bo test;
	{
		input>>y[i];
		cout<<y[i]<<endl;
		i++;
		dem++;
	}
	
	for(int j=0;j<dem;j++)
	{
		if(Xuli(y[j]))
			output<<"Yes"<<endl;
		else
			output<<"No"<<endl;
	}
}
int main()
{
//	Doc();
	DocChuoi();
	return 0;
}
