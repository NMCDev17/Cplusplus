#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool Binary_search(int a[], int l, int r, int x)
{
	if (l > r)
		return false;
	int m = (l + r) / 2;
	if (a[m] == x)
	{
		return true;
	}
	if (a[m] < x)
	{
		l = m + 1;
		Binary_search(a, l, r, x);
	}
	if (a[m] > x)
	{
		r = m - 1;
		Binary_search(a, l, r, x);
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
		else if (a[m] < x)
		{
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	return false;
}
int main()
{
	int n, x;
	cin >> n >> x;
	//	int a[n];
	vector<int> vt;
	for (int i = 0; i < n; i++)
	{
		vt.push_back(i + 1);
	}

	if (binary_search(vt.begin(), vt.end(), x))
	{
		cout << "found" << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}
	return 0;
}
