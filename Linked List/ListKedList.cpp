#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next = NULL;
};

typedef Node *node;

node MakeNode(int x)
{
	node a = new Node();
	a->data = x;
	a->next = NULL;
	return a;
}

bool Empty(node a)
{
	return a == NULL;
}

int Size(node a)
{
	int count = 0;
	while (a != NULL)
	{
		count++;
		a = a->next;
	}
	return count;
}

void InsertFirst(node &a, int x)
{
	node temp = MakeNode(x);
	if (a == NULL)
	{
		a = temp;
	}
	else
	{
		temp->next = a;
		a = temp;
	}
}

void InsertLast(node &a, int x)
{
	node temp = MakeNode(x);
	if (a == NULL)
	{
		a = temp;
	}
	else
	{
		node p = a;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = temp;
	}
}

void InsertMidle(node &a, int x, int pos)
{
	if (pos <= 0 || pos > Size(a) + 1)
		return;
	if (pos == 1)
	{
		InsertFirst(a, x);
		return;
	}
	else if (pos == Size(a) + 1)
	{
		InsertLast(a, x);
		return;
	}
	else
	{
		node truoc = NULL, sau = a;
		for (int i = 1; i < pos; i++)
		{
			truoc = sau;
			sau = sau->next;
		}
		node temp = MakeNode(x);
		if (truoc == NULL)
		{
			a = temp;
		}
		else
		{
			temp->next = sau;
			truoc->next = temp;
		}
	}
}

void DeleteFirst(node &a)
{
	if (a == NULL)
	{
		return;
	}
	else
	{
		a = a->next;
	}
}

void DeleteLast(node &a)
{
	if (a == NULL)
	{
		return;
	}
	else
	{
		node truoc = NULL, sau = a;
		while (sau->next != NULL)
		{
			truoc = sau;
			sau = sau->next;
		}
		if (truoc == NULL)
		{
			a = NULL;
		}
		truoc->next = NULL;
	}
}

void DeleteMidle(node &a, int pos)
{
	if (pos <= 0 || pos > Size(a))
	{
		return;
	}
	else if (a == NULL)
	{
		return;
	}
	else
	{
		node truoc = NULL, sau = a;
		for (int i = 1; i < pos; i++)
		{
			truoc = sau;
			sau = sau->next;
		}
		if (truoc == NULL)
		{
			a = a->next; // TH danh sach co 1 phan tu;
		}
		else
		{
			truoc->next = sau->next;
		}
	}
}

void Swap(node &a)
{
	for (node p = a; p->next != NULL; p = p->next)
	{
		node min = p;
		for (node h = p->next; h != NULL; h = h->next)
		{
			if (min->data > h->data)
			{
				min = h;
			}
		}
		int temp = min->data;
		min->data = p->data;
		p->data = temp;
	}
}

void IN(node a)
{
	while (a != NULL)
	{
		cout << a->data << " ";
		a = a->next;
	}
	cout << endl;
}
int main()
{
	node head = NULL;
	int key;
	do
	{
		cout << "--------------------MENU------------------------" << endl;
		cout << "1.Them phan tu vao dau danh sach lien ket." << endl;
		cout << "2.Them phan tu vao cuoi danh sach lien ket." << endl;
		cout << "3.Them phan tu vao giua danh sach lien ket." << endl;
		cout << "4.Xoa phan tu dau danh sach lien ket." << endl;
		cout << "5.Xoa phan tu cuoi danh sach lien ket." << endl;
		cout << "6.Xoa phan tu giua danh sach lien ket." << endl;
		cout << "7.Duyet danh sach lien ket." << endl;
		cout << "8.Sap xep danh sach lien ket theo chieu tang dan." << endl;
		cout << "0.Thoat!" << endl;
		cout << "------------------------------------------------" << endl;
		cout << "Lua chon:";
		cin >> key;

		switch (key)
		{
		case 0:
			return 0;
		case 1:
		{
			int x;
			cout << "Nhap vao gia tri muon them:";
			cin >> x;
			InsertFirst(head, x);
			break;
		}
		case 2:
		{
			int x;
			cout << "Nhap vao gia tri muon them:";
			cin >> x;
			InsertLast(head, x);
			break;
		}
		case 3:
		{
			int x, pos;
			cout << "Nhap vao gia tri muon them:";
			cin >> x;
			cout << "Vi tri muon them:";
			cin >> pos;
			InsertMidle(head, x, pos);
			break;
		}
		case 4:
		{
			DeleteFirst(head);
			break;
		}
		case 5:
		{
			DeleteLast(head);
			break;
		}
		case 6:
		{
			int pos;
			cout << "Nhap vao vi tri muon xoa: ";
			cin >> pos;
			DeleteMidle(head, pos);
			break;
		}
		case 7:
		{
			IN(head);
			break;
		}
		case 8:
		{
			Swap(head);
			break;
		}
		}
	} while (key != 0);
	return 0;
}
