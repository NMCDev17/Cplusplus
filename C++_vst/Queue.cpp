#include<iostream>
#include<queue>
#include<vector>
#include<string>
using namespace std;

vector<string> res;
//Chuyen doi so nhi phan tu 1 den 10000;
void ThucHienDoiSo()
{
	queue<string> st;
	st.push("1");
	res.push_back("1");
	while (st.size() < 10000)
	{
		string top = st.front();
		res.push_back(top + "0");
		res.push_back(top + "1");
		st.pop();
		st.push(top + "0");
		st.push(top + "1");
	}

}

vector<long long> res2;
void ThucHienChuyenSo2()
{
	queue<string> st2;
	res2.push_back(9);
	st2.push("9");
	while (st2.size() < 1001)
	{
		string top = st2.front();
		st2.pop();
		res2.push_back((stoll)(top+"0"));
		res2.push_back(stoll(top + "9"));
		st2.push(top + "0");
		st2.push(top + "9");
	}
}
int main()
{
	/**queue<int> a;
	a.push(1);
	a.push(2);
	a.push(3);
	cout << a.front() << " ";
	a.pop();
	cout << a.front() << " ";
	a.pop();
	cout << a.front() << endl;
	cout << a.size();*/
	/*ThucHienDoiSo();
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << res[i] << " ";
		}
		cout << endl;
	}*/
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		for (int i = 0; i < n; i++)
		{
			if (res2[i] % n == 0)
			{
				cout << res[i];
				break;
			}
		}
		cout << endl;
	}
	return 0;
}