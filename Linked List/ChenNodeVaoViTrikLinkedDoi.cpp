#include <iostream>
using namespace std;

struct doulinkedlist
{
    int data;
    doulinkedlist *pre = NULL;
    doulinkedlist *next = NULL;
};
typedef doulinkedlist *DouLinkedList;

DouLinkedList makeNode(int x)
{
    DouLinkedList tmp = new doulinkedlist;
    tmp->data = x;
    tmp->pre = NULL;
    tmp->next = NULL;
    return tmp;
}

void addNode(DouLinkedList &head, DouLinkedList &tail, int x)
{
    doulinkedlist *tmp = makeNode(x);
    if (head == NULL)
    {
        tmp->pre = head;
        head = tmp;
        tail = tmp;
    }
    else
    {
        tmp->pre = tail;
        tail->next = tmp;
        tail = tail->next;
    }
}

int size(DouLinkedList head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void insert(DouLinkedList &head, DouLinkedList &tail, int x, int k)
{
    DouLinkedList tmp = makeNode(x);
    if (k < 0 || k > size(head))
        return;
    if (k == 0)
    {
        head->pre = tmp;
        tmp->next = head;
        head = tmp;
    }
    else if (k == size(head))
    {
        addNode(head, tail, x);
    }
    else
    {
        DouLinkedList p = head;
        for (int i = 0; i < k - 1; i++)
        {
            p = p->next;
        }
        tmp->pre = p;
        tmp->next = p->next;
        p->next->pre = tmp;
        p->next = tmp;
    }
}
void printNode(DouLinkedList head)
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
    DouLinkedList head = NULL;
    DouLinkedList tail = NULL;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        addNode(head, tail, x);
    }
    int k, x;
    cin >> k >> x;
    insert(head, tail, x, k);
    printNode(head);
    return 0;
}