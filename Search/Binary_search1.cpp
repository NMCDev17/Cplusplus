#include <iostream>
#include <algorithm>
using namespace std;
// Binary_search do phuc tap O(logN);
// Ham lowe_bound ap dung cho vector, mang, set, map
// lower_bound tra ve vi tri dau tien cua phan tu >= key
// upper_bound tra ve vi tri dau tien cua phan tu > key
bool Binary_search(int a[], int l, int r, int x)
{
	if (l > r)
		return false;
	int m = (l + r) / 2;
	if (a[m] == x)
	{
		return true;
	}
	else if (a[m] > x)
	{
		r = m - 1;
	}
	else
	{
		l = m + 1;
	}
}

bool bs(int a[], int n, int x)
{
	int l = 0;
	int r = n - 1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x)
		{
			return true;
		}
		else if (a[m] > x)
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return false;
}

int first_pos(int a[], int n, int x)
{
	int res = -1;
	int l = 0, r = n - 1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x)
		{
			res = m;
			r = m - 1;
		}
		else if (a[m] > x)
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return res;
}

int last_pos(int a[], int n, int x)
{
	int res = -1;
	int l = 0, r = n - 1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x)
		{
			res = m;
			l = m + 1;
		}
		else if (a[m] > x)
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return res;
}

int main()
{
	int n, x;
	cin >> n >> x;
	int a[n];
	for (int &x : a)
		cin >> x;
	cout << first_pos(a, n, x) << " " << last_pos(a, n, x) << endl;
	int l = first_pos(a, n, x);
	int r = last_pos(a, n, x);
	if (l != -1)
	{
		cout << r - l + 1 << endl;
	}
	auto it = lower_bound(a, a + n, x);
	cout << it - a << endl;
	cout << *it << endl;
	auto res = upper_bound(a, a + n, x);
	cout << distance(a, res) << endl;
	cout << *res << endl;
	return 0;
}
