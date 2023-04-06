#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//Node quan ly thong tin sinh vien;
struct Node
{
	string name = "\0";
	int age = 0;
	string address = "\0";
	Node* next = NULL;
};
typedef Node* node;
//Khai bao dong;
node MakeNode(string name, int age, string address)
{
	node temp = new Node();
	temp->name = name;
	temp->age = age;
	temp->address = address;
	temp->next = NULL;
	return temp;
}
//Kiem tra rong;
bool Empty(node a)
{
	return a == NULL;
}

//Dem so luong sinh vien trong danh sach;
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

//Them sinh vien vao dau danh sach;
void InsertFirst(node& a, string name, int age, string address)
{
	node stud = MakeNode(name, age, address);//Khoi tao sinh vien;
	if (a == NULL)
	{
		//Danh sach rong thi them sinh vien luon;
		a = stud;
	}
	else
	{
		stud->next = a;//tro den vi tri dau tien;
		a = stud;// cho a nhan lai vi tri dau tien;
	}
}
//them sinh vien vao cuoi danh sach;
void InsertLast(node& a, string name, int age, string address)
{
	if (a == NULL)
	{
		InsertFirst(a, name, age, address);//danh sach rong thuc hien them vao dau;
	}
	else
	{
		node temp = a;
		while (temp->next != NULL)
		{
			temp = temp->next;//di chuyen den vi tri cuoi cung trong danh sach;
		}
		node stud = MakeNode(name, age, address);
		temp->next = stud;//tro den dia chi cua sinh vien muon them;
		temp = stud;//thuc hien them vao danh sach;
	}
}
//them sinh vien vao giua danh sach;
void InsertMidle(node& a, string name, int age, string address, int pos)
{
	node truoc = NULL, sau = a;
	if (pos < 1 || pos > Size(a) + 1)return;//vi tri khong hop le thoat chuong trinh;
	if (pos == 1)
	{
		InsertFirst(a, name, age, address);//Them vao dau danh sach;
	}
	else if (pos == Size(a) + 1)
	{
		InsertLast(a, name, age, address);//them vao cuoi danh sach;
	}
	else
	{
		node stud = MakeNode(name, age, address);
		node truoc = NULL, sau = a;
		for (int i = 1; i < pos - 1; i++)
		{
			truoc = sau;
			sau = sau->next;
		}
		if (truoc == NULL)
		{
			a = stud;//danh sach rong them luon vao danh sach;
		}
		else
		{
			stud->next = sau->next;//vi tri cua stud lien ket vao vi tri pos+1;
			truoc->next = stud;//vi tri pos - 1 lien ket vao vi tri stud;
		}	
	}
}

void DeleteFirst(node& a)
{
	if (a == NULL) return;
	a = a->next;
}

void DeleteMidle(node& a, int pos)
{
	if (pos > Size(a) + 1) return;
	if (pos < 1) return;
	node truoc = NULL, sau = a;
	for (int i = 1; i <= pos - 1; i++)
	{
		truoc = sau;
		sau = sau->next;
	}
	truoc->next = sau->next;
}

void DeleteLast(node& a)
{
	if (a == NULL) return;
	node truoc = NULL, sau = a;
	while (sau->next != NULL)
	{
		truoc = sau;
		sau = sau->next;
	}
	if (truoc == NULL) 
		a = NULL;
	else
		truoc -> next = NULL;
}

void InList(node a)
{
	cout << "====== Danh sach sinh vien ======" << endl;
	cout << "+------------------------------+----------+------------------------------+" << endl;
	cout << "|" << left << setw(30) << "Name" << "|" << left << setw(10) << "Age" << "|" << left << setw(30) << "Address" <<"|"<< endl;
	cout << "+------------------------------+----------+------------------------------+" << endl;
	while (a != NULL)
	{
		cout << "|" << left << setw(30) <<a->name << "|" << left << setw(10) << a->age << "|" << left << setw(30) << a->address << "|" << endl;
		a = a -> next;
	}
	cout << "+------------------------------+----------+------------------------------+" << endl;
}
int main()
{
	node head = NULL;
	int key;
	cout << "1.Them sinh vien vao dau danh sach!" << endl;
	cout << "2.Them sinh vien vao cuoi danh sach!" << endl;
	cout << "3.Them sinh vien vao giua danh sach!" << endl;
	cout << "4.Xoa sinh vien dau danh sach!" << endl;
	cout << "5.Xoa sinh vien giua danh sach!" << endl;
	cout << "6.Xoa sinh vien cuoi danh sach!" << endl;
	cout << "7.In danh sach sinh vien!" << endl;
	do {
		cout << "Nhap vao lua chon:"; cin >> key; rewind(stdin);
		switch (key)
		{
		case 0:return 0;
		case 1:
		{
			string name; cout << "Nhap vao ten sinh vien muon them:"; getline(cin, name); rewind(stdin);
			int age; cout << "Nhap vao tuoi sinh vien:"; cin >> age; rewind(stdin);
			string address; cout << "Nhap vao dia chi cua sinh vien:"; getline(cin, address); rewind(stdin);
			InsertFirst(head, name, age, address);
			break;
		}
		case 2:
		{
			string name; cout << "Nhap vao ten sinh vien muon them:"; getline(cin, name); rewind(stdin);
			int age; cout << "Nhap vao tuoi sinh vien:"; cin >> age; rewind(stdin);
			string address; cout << "Nhap vao dia chi cua sinh vien:"; getline(cin, address); rewind(stdin);
			InsertLast(head, name, age, address);
			break;
		}
		case 3:
		{
			string name; cout << "Nhap vao ten sinh vien muon them:"; getline(cin, name); rewind(stdin);
			int age; cout << "Nhap vao tuoi sinh vien:"; cin >> age; rewind(stdin);
			string address; cout << "Nhap vao dia chi cua sinh vien:"; getline(cin, address); rewind(stdin);
			int pos; cout << "Nhap vao vi tri them:"; cin >> pos;
			InsertMidle(head, name, age, address, pos);
			break;
		}
		case 4: {
			DeleteFirst(head);
			break;
		}
		case 5:
		{
			int pos; cout << "Nhap vao vi tri muon xoa:"; cin >> pos;
			DeleteMidle(head, pos);
			break;
		}
		case 6:
		{
			DeleteLast(head);
			break;
		}
		case 7:
		{
			InList(head);
			break;
		}
		default:
			cout << "Lua chon khong hop le!"<<endl;
			cout << "Vui long nhap lai lua chon:"; cin >> key;
		}
	} while (key != 0);
	return 0;
}