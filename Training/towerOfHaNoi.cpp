#include <iostream>
using namespace std;

void TowerOfHaNoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << "Chuyen di thu " << n << " tu coc " << a << " sang coc " << c << endl;
        return;
    }
    else
    {
        TowerOfHaNoi(n - 1, a, c, b);

        cout << "Chuyen dia thu " << n << " tu coc " << a << " sang coc " << c << endl;
        TowerOfHaNoi(n - 1, b, a, c);
    }
}
int main()
{
    int n;
    cin >> n;
    TowerOfHaNoi(n, 'A', 'B', 'C');
    return 0;
}