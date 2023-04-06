#include <iostream>
using namespace std;

struct Deque
{
    int a[100];
    int n = 0;
    int real = -1;
} de;

void push(int x)
{
    if (de.real >= 100)
        return;
    else
    {
        if (de.real == -1)
        {
            de.real++;
            de.a[de.real] = x;
            de.n++;
        }
        else
        {
            de.real++;
            de.a[de.real] = x;
            de.n++;
        }
    }
}

void pop_front()
{
    if (de.n == 0)
    {
        return;
    }
    else
    {
        for (int i = 0; i < de.real; i++)
        {
            de.a[i] = de.a[i + 1];
        }
        de.real--;
        de.n--;
    }
}

void pop_back()
{
    if (de.n == 0)
    {
        return;
    }
    else
    {
        de.n--;
        de.real--;
    }
}
int Front()
{
    return de.a[0];
}
bool empty()
{
    if (de.n != 0)
    {
        return false;
    }
    return true;
}

int main()
{
    cout << "Nhap vao n =";
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        push(i);
    }
    for (int i = 0; i < de.n; i++)
    {
        cout << de.a[i] << " ";
    }
    // pop_back(); // xoa phan tu cuoi deque;
    // pop_back();// xoa phan tu cuoi deque;
    int sum = 0;
    for (int i = 0; i < de.n; i++)
    {
        sum += de.a[i];
    }
    cout << "\n"
         << sum << endl;
    if (empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}