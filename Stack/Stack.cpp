#include<iostream>
#include<stack>
#include<string>
using namespace std;


int main()
{
	int n;
	cout << "Nhap vao so thap phan muon chuyen doi:"; cin >> n;
	stack<int> st;
	/*st.push(1);
	st.push(2);
	st.push(3);
	cout<<st.size();
	st.pop();
	cout<<st.top();*/
	// chuyen doi so nhi phan;
	int x;
		while (n != 0)
		{
			x = n % 2;
			st.push(x);
			n /= 2;
		}

		while (!st.empty())
		{
			cout << st.top() << " ";
			st.pop();
		}
	// kiem tra chuoi nhap vao co dung khong;
	/*string s;
	cout << "Nhap vao chuoi:"; getline(cin, s);
	stack<char> st;
	for (char x : s)
	{
		if (x == '(')
		{
			st.push(x);
		}
		else
		{
			st.pop();
		}
	}

	if (!st.empty())
		cout << "Khong hop le!";
	else
		cout << "Hop le!";
	*/
	/*int n; cout << "Nhap vao n="; cin >> n;
	int a[10];
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:"; cin >> a[i];
	}
	
	for (int j = 0; j < n; j++)
	{
		int res = -1;
		for (int z = j + 1; z < n; z++)
		{
			if (a[z] > a[j])
			{
				res = a[z];
				break;
			}
		}
		cout << res << " ";
	}*/
	return 0;
}