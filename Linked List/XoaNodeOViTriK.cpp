#include <iostream>
using namespace std;

struct linkedlist
{
    int data;
    linkedlist *next = NULL;
};
typedef linkedlist *LinkedList;

LinkedList makeNode(int x)
{
    LinkedList tmp = new linkedlist;
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}

int size(LinkedList head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void insertLast(LinkedList &head, int x)
{
    LinkedList tmp = makeNode(x);
    if (head == NULL)
    {
        head = tmp;
    }
    else
    {
        LinkedList p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = tmp;
    }
}

void inNode(LinkedList head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void deleMidle(LinkedList &head, int k)
{
    if (head == NULL)
    {
        return;
    }
    if (k < 0 || k >= size(head))
    {
        return;
    }
    if (k == 0)
    {
        head = head->next;
    }
    else
    {
        LinkedList befor = NULL, alter = head;
        for (int i = 0; i < k; i++)
        {
            befor = alter;
            alter = alter->next;
        }
        befor->next = alter->next;
    }
}
int main()
{
    int n;
    cin >> n;
    LinkedList head = NULL;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        insertLast(head, x);
    }
    int k;
    cin >> k;
    deleMidle(head, k);
    inNode(head);
    return 0;
}