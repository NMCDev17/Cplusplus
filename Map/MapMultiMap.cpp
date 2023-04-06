#include<iostream>
#include<map>
#include<set>
using namespace std;

int main()
{
	map<int, int> t;
	/*t[0] = 3;
	t.insert({ 1,2 });
	t.insert({ 2,3 });
	for (auto x : t)
	{
		cout << x.first << " " << x.second << endl;
	}

	if (t.count(1) != 0)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	t.erase(1);
	cout << t.size() << endl;*/

	/*int temp; cin >> temp;
	while (--temp)
	{
		int n; cin >> n;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			t[x]++;
		}
	}

	for (auto x : t)
	{
		cout << x.first << " " << x.second << endl;
	}*/

	/*int temp; cin >> temp;
	while (--temp)
	{
		int n; cin >> n;
		int *a= new int[100];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			t[i]++;
		}

		for (int j = 0; j < n; j++)
			if (t.count(a[j]) != 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
	}*/

	set<int> m;
	set<int> m1;
	int temp; cin >> temp;
	while (temp--)
	{
		cout << "So luong phan tu trong m:";
		int n; cin >> n;
		cout << "Day gia tri cua m:";
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			m.insert(x);
		}
		cout << "So luong phan tu trong set m1:";
		int h; cin >> h;
		cout << "Day gia tri cua m1:";
		for (int j = 0; j < h; j++)
		{
			int y; cin >> y;
			m1.insert(y);
		}
		int dem = 0;
		for (int x : m)
		{
			if (m1.count(x) == 0)
				dem++;
		}
		cout << "Co " << dem << " phan tu trong m khong nam trong m1" << endl;
	}
	return 0;
}