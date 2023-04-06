#include <iostream>
using namespace std;

class LinkedList
{
    int data;
    LinkedList *pre;
    LinkedList *next;

public:
    LinkedList();
    LinkedList(int val);
    int size(LinkedList *head);
    void addNode(LinkedList *head, LinkedList *tail, int val);
    void insert(LinkedList *head, int val, int pos);
    void printNode(LinkedList *head);
};

LinkedList::LinkedList()
    : data(0), pre(NULL), next(NULL)
{
}

LinkedList::LinkedList(int val)
{
    this->data = val;
    this->pre = NULL;
    this->next = NULL;
}

int LinkedList::size(LinkedList *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void LinkedList::addNode(LinkedList *head, LinkedList *tail, int val)
{
    LinkedList *tmp = new LinkedList(val);
    if (!head)
    {
        head = tmp;
        head = tail;
    }
    else
    {
        tmp->pre = tail;
        tail->next = tmp;
        tail = tail->next;
    }
}

void LinkedList::insert(LinkedList *head, int val, int pos)
{
    LinkedList *tmp = new LinkedList(val);
    if (pos == 0)
    {
        tmp->next = head;
        head = tmp;
    }
    else
    {
        LinkedList *tmp = new LinkedList(val);
        LinkedList *befor = NULL, *alter = head;
        for (int i = 0; i < pos; i++)
        {
            befor = alter;
            alter = alter->next;
        }
        tmp->next = alter;
        tmp->pre = befor;
        befor->next = tmp;
    }
}

void LinkedList::printNode(LinkedList *head)
{
    while (head->next)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    int n;
    cin >> n;
    LinkedList li, *head = NULL, *tail = NULL;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        li.addNode(head, tail, val);
    }

    li.printNode(head);
    return 0;
}
