#include <iostream>
using namespace std;

int n = 0;
int st[100];
void push(int x)
{
	if (n >= 100)
		return;
	st[n] = x;
	n++;
}

void pop()
{
	if (n >= 1)
	{
		n--;
	}
}

int top()
{
	return st[n - 1];
}

int size()
{
	return n;
}

bool empty()
{
	if (n != 0)
	{
		return false;
	}
	return true;
}
int main()
{
	int key;
	do
	{
		cout << "1.Push" << endl;
		cout << "2.Pop" << endl;
		cout << "3.Top" << endl;
		cout << "4.Size" << endl;
		cout << "Thoat" << endl;
		cout << "-->lua chon: ";
		cin >> key;
		switch (key)
		{
		case 1:
		{
			int x;
			cout << "Nhap vao x:";
			cin >> x;
			push(x);
			break;
		}
		case 2:
		{
			pop();
			break;
		}
		case 3:
		{
			if (n == 0)
			{
				cout << "Empty" << endl;
			}
			else
			{
				cout << top() << endl;
			}
			break;
		}
		case 4:
		{
			cout << "So luong phan tu trong stack: ";
			cout << size() << endl;
			break;
		}
		case 0:
			return 0;
		}
	} while (key != 0);
	return 0;
}
