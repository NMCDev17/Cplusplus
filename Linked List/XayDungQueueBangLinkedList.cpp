#include <iostream>
using namespace std;

struct queue
{
    int data;
    queue *head = NULL;
    queue *tail = NULL;
};
typedef queue *Queue;

Queue InitQueue(int val) // khoi tao 1 node;
{
    Queue tmp = new queue();
    tmp->data = val;
    tmp->head = NULL;
    tmp->tail = NULL;
    return tmp;
}

void push(Queue &a, int x)
{
    Queue temp = InitQueue(x);
    if (a == NULL)
        a = temp; // danh sach rong thi node moi tao la phan tu dau tien trong dslk luon;
    else
    {
        Queue p = a;
        while (p->tail != NULL) // tro den vi tri cuoi cung moi dung lai;
        {
            p = p->tail; // tro den dia chi cua phan tu tiep theo;
        }
        p->tail = temp; // cho phan head cua node cuoi tro den node moi;
        temp->head = p; // phan head cua node moi tro den p;
    }
}
void pop(Queue &a)
{
    if (a == NULL)
        return;
    else
    {
        a = a->tail;    // xoa Queue dau tien;
        a->head = NULL; // phan luu dia chi cua node truoc node dau tien luon la NULL;
    }
}

int size(Queue a)
{
    int count = 0;
    while (a != NULL)
    {
        count++;
        a = a->tail;
    }
    return count; // tra ve so luong phan tu trong dslk;
}

bool Empty(Queue a)
{
    return a == NULL; // tra ve true neu a == NULL;
}

void front(Queue a)
{
    cout << a->data; // lay phan tu dau tien trong dslk;
}
int main()
{
    int n;
    cin >> n;
    Queue head = NULL;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        push(head, x);
    }
    cout << "So luong phan tu trong Queue: " << size(head) << endl;
    Queue tmp = head;
    while (tmp != NULL)
    {
        front(tmp);
        cout << " ";
        tmp = tmp->tail;
    }
    return 0;
}