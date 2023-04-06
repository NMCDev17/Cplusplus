#include <iostream>
using namespace std;

int main()
{
    cout << "Nhap vao a = ";
    int a;
    cin >> a;
    cout << "Nhap vao b = ";
    int b;
    cin >> b;
    cout << "Nhap vao c = ";
    int c;
    cin >> c;
    int max = 0;
    if (a > b)
        max = a;
    else
        max = b;
    if (max < c)
        max = c;
    cout << max << endl;
    return 0;
}