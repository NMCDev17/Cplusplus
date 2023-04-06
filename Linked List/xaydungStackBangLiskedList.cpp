#include <iostream>
using namespace std;

struct stack
{
	int data;
	stack *next = NULL;
};

typedef stack *Stack;

Stack Makestack(int x)
{
	Stack newstack = new stack();
	newstack->data = x;
	newstack->next = NULL;
	return newstack;
}

void push(Stack &top, int x)
{
	Stack newstack = Makestack(x);
	if (top == NULL)
	{
		top = newstack;
	}
	else
	{
		newstack->next = top; // tro den phan tu dau tien trong dslk;
		top = newstack;		  // not newstack se thanh not dau tien;
	}
}

void pop(Stack &top)
{
	if (top == NULL)
		return;		 // dslk rong thi thoat luon;
	top = top->next; // xoa stack dau ;
}

int Top(Stack top)
{
	if (top == NULL)
	{
		return 0;
	}
	return top->data;
}

int size(Stack top)
{
	int count = 0;
	while (top != NULL)
	{
		count++;
		top = top->next;
	}
	return count;
}

bool empty(Stack top)
{
	return top == NULL;
}

void printStack(Stack top)
{
	while (top != NULL)
	{
		cout << top->data << " ";
		top = top->next;
	}
	cout << endl;
}

int main()
{
	int key;
	Stack head = NULL;
	do
	{
		cout << "1.Push" << endl;
		cout << "2.Pop" << endl;
		cout << "3.Top" << endl;
		cout << "4.Size" << endl;
		cout << "5.print stack" << endl;
		cout << "6. empty" << endl;
		cout << "Thoat" << endl;
		cout << "-->lua chon: ";
		cin >> key;
		switch (key)
		{
		case 1:
		{
			int x;
			cout << "Nhap vao x:";
			cin >> x;
			push(head, x);
			break;
		}
		case 2:
		{
			pop(head);
			break;
		}
		case 3:
		{
			if (empty(head))
			{
				cout << "Stack is Empty" << endl;
			}
			else
			{
				cout << Top(head) << endl;
			}
			break;
		}
		case 4:
		{
			cout << "So luong phan tu trong stack: ";
			cout << size(head) << endl;
			break;
		}
		case 5:
		{
			printStack(head);
			break;
		}
		case 6:
		{
			if (empty(head))
				cout << "Stack is Empty!" << endl;
			else
				cout << "Stack no empty" << endl;
		}
		case 0:
			return 0;
		}
	} while (key != 0);
	return 0;
}
