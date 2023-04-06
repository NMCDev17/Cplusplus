#include <iostream>
using namespace std;

struct doulinked
{
    int data;
    doulinked *next = NULL;
    doulinked *pre = NULL;
};
typedef doulinked *DouLinked;

DouLinked makeNode(int x)
{
    DouLinked tmp = new doulinked;
    tmp->data = x;
    tmp->next = NULL;
    tmp->pre = NULL;
    return tmp;
}

int size(DouLinked head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

void addNode(DouLinked &head, DouLinked &tail, int val)
{
    DouLinked tmp = makeNode(val);
    if (head == NULL)
    {
        head = tmp;
        tail = tmp; // danh sach lien ket rong thi dau cuoi nhu nhau;
    }
    else
    {
        tmp->pre = tail;   // them tmp vao cuoi danh sach cho phan pre cua tmp tro den tail
        tail->next = tmp;  // phan next cua tail tro den tmp;
        tail = tail->next; // cap nhat lai tail;
    }
}

void insert(DouLinked &head, DouLinked &tail, int val, int pos)
{
    DouLinked tmp = makeNode(val);
    if (pos < 0 || pos > size(head))
    {
        return;
    }
    if (pos == 0)
    {
        head->pre = tmp;
        tmp->next = head;
        head = tmp;
    }
    if (pos == size(head))
    {
        tmp->pre = tail;
        tail->next = tmp;
        tail = tail->next;
    }
    else
    {
        DouLinked befor = NULL, alter = head;
        for (int i = 0; i < pos; i++)
        {
            befor = alter;
            alter = alter->next;
        }
        tmp->pre = befor;
        tmp->next = alter;
        befor->next = tmp;
        alter->pre = tmp;
    }
}

void Delete(DouLinked &head, DouLinked &tail, int pos)
{
    if (head == NULL)
    {
        return;
    }
    else if (pos == 0)
    {
        head = head->next;
        head->pre = NULL;
    }
    else if (pos == size(head) - 1)
    {
        tail = tail->pre;
        tail->next = NULL;
    }
    else
    {
        DouLinked befor = NULL, alter = head;
        for (int i = 0; i < pos; i++)
        {
            befor = alter;
            alter = alter->next;
        }
        befor->next = alter->next;
        alter->next->pre = befor;
        alter->pre = NULL;
    }
}

DouLinked search(DouLinked head, int key)
{
    if (head == NULL)
        return head;
    else
    {
        while (head != NULL && head->data == key)
        {
            head = head->next;
        }
    }
    return head;
}

void sort(DouLinked &head)
{
    for (DouLinked i = head; i->next != NULL; i = i->next)
    {
        DouLinked min = i;
        for (DouLinked j = i->next; j != NULL; j = j->next)
        {
            if (min->data > j->data)
            {
                min = j;
            }
        }
        int tmp = i->data;
        i->data = min->data;
        min->data = tmp;
    }
}
void inNode(DouLinked head)
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
    DouLinked head = NULL;
    DouLinked tail = NULL;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        addNode(head, tail, x);
    }
    inNode(head);
    return 0;
}