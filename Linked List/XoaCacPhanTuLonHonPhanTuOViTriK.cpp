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

void delePos(LinkedList &head, int pos)
{
    if (head == NULL)
        return;
    if (pos == 0)
    {
        head = head->next;
    }
    else
    {
        LinkedList befor = NULL;
        LinkedList alter = head;
        for (int i = 0; i < pos; i++)
        {
            befor = alter;
            alter = alter->next;
        }
        befor->next = alter->next;
    }
}

linkedlist *Del(LinkedList head, int k)
{
    LinkedList result = new linkedlist;

    LinkedList p = head;
    int num;
    for (int i = 0; i <= k; i++)
    {
        num = p->data;
        p = p->next;
    }
    p = head;
    while (p != NULL)
    {
        if (p->data <= num)
        {
            insertLast(result, p->data);
        }
    }
    return result;
}

void inNode(LinkedList head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    int n;
    cin >> n;
    LinkedList head = NULL;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insertLast(head, x);
    }
    int k;
    cin >> k;
    head = Del(head, k);
    inNode(head);
    return 0;
}