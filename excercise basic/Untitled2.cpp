#include<iostream>
using namespace std;
//Khoi tao nut lien ket;
struct Node
{
	int data;
	Node *next = NULL;
};
typedef Node* node;

//Kiem tra rong;
bool Empty(node a)
{
	return a == NULL;
}

//Ham khoi tao dong 1 nut;
node MakeNode(int x)
{
	node temp = new Node();
	temp->data = x;
	temp->next = NULL;
	return temp;
}

//ham tra ve so luong phan tu trong danh sach;
int Size(node a)
{
	int count = 0;
	while(a != NULL)
	{
		count++;
		a = a->next;
	}
	return count;
}
//chen phan tu vao dau danh sach;
void InsertFirst(node &a,int x)
{
	node temp = MakeNode(x);
	if(a==NULL)
	{
		a = temp;
	}
	else
	{
		temp->next = a;// tro den vi tri dau tien
		a = temp; // gan vi tri dau tien cho a;
	}
}
//chen phan tu vao cuoi danh sach;
void InsertLast(node &a,int x)
{
	node temp = MakeNode(x);
	if(a == NULL)
	{
		a = temp;
	}
	else
	{
		node p = a;
		while(p->next !=NULL)
		{
			p = p->next;
		}
		p->next = temp;
	}
}
//chen phan tu vao giua danh sach;
void InsertMidle(node &a,int x,int pos)
{
	if(pos < 1 || pos > Size(a)+1)return ;//Vi tri khong hop le!;
	if(pos == 1)
	{
		InsertFirst(a,x); return;
	}
	else if(pos == Size(a)+1)
	{
		InsertLast(a,x);return;
	}
	else
	{
		node p = a;
		for(int i=1;i<pos-1;i++)
		{
			p = p->next;
		}
		node temp = MakeNode(x);
		if(a==NULL)
		{
			a=temp;
		}
		else
		{
		temp->next = p->next;//Tro den vi tri thu pos;
		p->next = temp;		//vi tri pos - 1 tro den temp;
		}
	}
}
//Xoa phan tu dau trong danh sach;
void DeleteFirst(node &a)
{
	if(a == NULL)return;
	else
	a = a->next;	
}
//xoa phan tu cuoi trong danh sach;
void DeleteLast(node &a)
{
	if(a==NULL)
	{
		return;
	}
	else
	{
		node sau = a, truoc=NULL;
		while(sau->next != NULL)
		{
			truoc = sau;
			sau = sau->next;
		}
		if(truoc == NULL)
			a = NULL;
		else
			truoc->next = NULL;			
	}
}
//xoa phan tu o 1 vi tri giua nao do trong danh sach;
void DeleteMidle(node &a,int pos)
{
	node truoc = NULL,sau = a;
	for(int i=1;i<=pos-1;i++)
	{
		truoc = sau;//lay vi tri pos - 1;
		sau = sau->next;
	}
	
	truoc->next = sau->next;//vi tri pos - 1 tro den pos + 1;
}

//Sap xep danh sach lien ket theo chieu tang dan!;
void SapXep(node &a)
{
	
	for(node p=a;p<a+Size(a);p = p->next)
	{
		node min = p;
		for(node h = p->next ; h<=a+Size(a);h = h->next)
		{
			if(min->data > h->data)
			{
				min = h;
			}
		}
	}
}
//in danh sach lien ket;
void In(node a)
{
	while(a!=NULL)
	{
		cout<<a->data<<" ";
		a = a->next;
	}
	cout<<endl;
}
int main()
{
node head = NULL;
int key;
cout<<"1/Them 1 phan tu vao dau danh sach!"<<endl;
cout<<"2/Them 1 phan tu vao cuoi danh sach!"<<endl;
cout<<"3/Them 1 phan tu vao giua danh sach!"<<endl;
cout<<"4.Xoa phan tu dau trong danh sach!"<<endl;
cout<<"5.Xoa phan tu giua danh sach!"<<endl;
cout<<"6.Xoa phan tu cuoi danh sach!"<<endl;
cout<<"8.Sap xep danh sach lien ket theo chieu tang dan!"<<endl;
cout<<"7/In danh sach!"<<endl;
do
{
	cout<<"Lua chon:";cin>>key;
	if(key == 1)
	{
		int x;cout<<"Nhap vao gia tri cua x:";cin>>x;
		InsertFirst(head,x);
	}
	else if(key == 2)
	{
		int x;cout<<"nhap vao gia tri cua x:";cin>>x;
		InsertLast(head,x);
	}
	else if(key == 3)
	{
		int x;cout<<"Nhap vao gia tri cua x:";cin>>x;
		int pos;cout<<"Nhap vao vi tri muon them:";cin>>pos;
		InsertMidle(head,x,pos);
	}
	else if(key == 4)
	{
		DeleteFirst(head);
	}
	else if(key == 5)
	{
		int pos;cout<<"Nhap vao vi tri muon xoa:";cin>>pos;
		DeleteMidle(head,pos);
	}
	else if(key == 6)
	{
		DeleteLast(head);
	}
	else if(key == 8)
	{
		SapXep(head);
	}
	else if(key == 7)
	{
		In(head);
	}
}while(key!=0);
	return 0;
}
