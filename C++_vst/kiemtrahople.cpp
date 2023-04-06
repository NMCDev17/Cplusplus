#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	string str;
	cout << "Nhap vao chuoi muon kiem tra:"; getline(cin,str);
	stack <char> check;
	for (char x : str)
	{
		if (x == '(' || x == '{' || x == '[')
		{
			check.push(x);
		}
		else
		{
			check.pop();
		}
	}

	if (check.empty())
	{
		cout << "chuoi hop le!" << endl;
	}
	else
		cout << "chuoi khong hop le!";
	return 0;
}