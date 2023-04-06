#include <iostream>
using namespace std;

struct list
{
    int val;
    list *next = NULL;
};
typedef list *List;

// add 1 element to list;
List makeNode(int val)
{
    List tmp = new list;
    tmp->val = val;
    tmp->next = NULL;
    return tmp;
}

int size(List li)
{
    int count = 0;
    while (li != NULL)
    {
        count++;
        li = li->next;
    }
    return count;
}

void addNode(List &li, int val)
{
    List tmp = makeNode(val);
    if (li == NULL)
    {
        li = tmp;
    }
    else
    {
        List p = li;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = tmp;
    }
}

void insert(List &li, int val, int pos)
{
    List tmp = makeNode(val);
    if (pos < 0 || pos > size(li))
        return;
    if (pos == 0)
    {
        tmp->next = li;
        li = tmp;
    }
    else
    {
        List p = li;
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        tmp->next = p->next; // tro den node o vi tri pos;
        p->next = tmp;       // node truoc node o vi tri pos tro den tmp;
    }
}

void printNode(List li)
{
    while (li != NULL)
    {
        cout << li->val << " ";
        li = li->next;
    }
    cout << endl;
}

void sort(List &li)
{
    for (List p = li; p->next != NULL; p = p->next)
    {
        List min = p;
        for (List h = p->next; h != NULL; h = h->next)
        {
            if (min->val > h->val)
            {
                min = h;
            }
        }
        int temp = min->val;
        min->val = p->val;
        p->val = temp;
    }
}
List merge(List li1, List li2)
{
    List newli = NULL;
    while (li1 != NULL && li2 != NULL)
    {
        if (li1->val <= li2->val)
        {
            addNode(newli, li1->val);
            li1 = li1->next;
        }
        else
        {
            addNode(newli, li2->val);
            li2 = li2->next;
        }
    }

    while (li1 != NULL)
    {
        addNode(newli, li1->val);
        li1 = li1->next;
    }
    while (li2 != NULL)
    {
        addNode(newli, li2->val);
        li2 = li2->next;
    }
    return newli;
}
int main()
{
    int n;
    cin >> n;
    List li1 = NULL;
    // nhap vao cac element trong list1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        addNode(li1, x);
    }
    int n2;
    cin >> n2;
    List li2 = NULL;
    // Nhap vao cac element trong list2;
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        addNode(li2, x);
    }
    sort(li1);
    cout << "danh sach phan tu li1: ";
    printNode(li1);
    sort(li2);
    cout << "Danh sach phan tu li2: ";
    printNode(li2);
    List result = NULL;
    result = merge(li1, li2);
    printNode(result);
    return 0;
}