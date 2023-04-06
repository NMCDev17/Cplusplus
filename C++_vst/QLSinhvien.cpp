#include<iostream>
#include<cstring>
using namespace std;

class Person;
class School;
class Student;

class Person
{
protected:
	char name[20];
	int age;
public:
	void Nhap();
	void Xuat();
};

void Person::Nhap()
{
	cout << "Nhap vao ten:"; gets_s(name); cin.ignore();
	cout << "Nhap vao tuoi:"; cin >> age; cin.ignore();
}
void Person::Xuat()
{
	cout << "Ten:" << name << endl;
	cout << "Tuoi:" << age << endl;
}

class School
{
	friend class Student;
	friend void In_Ds(Student*, int);
private:
	char tentruong[20];
	char address[20];
	Person boss;
};

class Student :public Person
{
	friend void In_Ds(Student*, int);
private:
	char classmate[20];
	char nganh[20];
	School truong;
public:
	void Nhap();
	void Xuat();
};

void Student::Nhap()
{
	cin.ignore();
	Person::Nhap(); cin.ignore();
	cout << "Nhap vao ten lop:" << gets_s(classmate); cin.ignore();
	cout << "Nhap vao ten nganh:" << gets_s(nganh); cin.ignore();
	cout << "Nhap vao ten truong:" << gets_s(truong.tentruong); cin.ignore();
	cout << "Nhap vao dia chi truong:" << gets_s(truong.address); cin.ignore();
	cin.ignore();
}

void Student::Xuat()
{
	Person::Xuat();
	cout << "Lop:" << classmate<<endl;
	cout << "Nganh:" << nganh<<endl;
	cout << "Truong:" << truong.tentruong << endl;
	cout << "Dia chi truong:" << truong.address << endl;
}

void In_Ds(Student* sv, int n)
{
	int check = 0;
	for (Student* s = sv; s < sv + n; s++)
	{
		if (strcmp(s->truong.tentruong, "DHCNHN") == 0)
		{
			s->Xuat();
		}
	}
}
int main()
{
	Student sv[100];
	int n;
	cout << "Nhap vao so luong sinh vien:"; cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		sv[i].Student::Nhap();
	}
	//
	In_Ds(sv, n);
	return 0;
}