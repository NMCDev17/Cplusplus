#include<iostream>
using namespace std;

class Phanso
{
protected:
	int tuso;
	int mauso;
public:
	Phanso()
	{
		tuso = 0;
		mauso = 1;
	}

	void NhapPhanSo()
	{
		cout << "Tuso : "; cin >> tuso;
		cout << "Mau so : "; cin >> mauso;
	}

	void XuatPhanSo()
	{
		cout << tuso << "/" << mauso<<" ";
	}
	Phanso Sum(Phanso, Phanso);
	Phanso Tru(Phanso,Phanso);
	~Phanso()
	{
		tuso = 0;
		mauso = 1;
	}
};

Phanso Phanso::Sum(Phanso obj1,Phanso obj2)
{
	Phanso obj3;
	obj3.tuso = obj1.tuso * obj2.mauso + obj2.tuso * obj1.mauso;
	obj3.mauso = obj1.mauso * obj2.mauso;
	return obj3;
}

Phanso Phanso::Tru(Phanso obj1,Phanso obj2)
{
	Phanso obj3;
	obj3.tuso = obj1.tuso * obj2.mauso - obj2.tuso * obj1.mauso;
	obj3.mauso = obj1.mauso * obj2.mauso;
	return obj3;
}
int main()
{
	Phanso *obj = new Phanso[2];
	Phanso obj3;
	//Nhap phan so;
	for (Phanso* i = obj; i < obj + 2; i++)
	{
		i->NhapPhanSo();
	}
	//Xuat phan so vua nhap;
	cout << "\nPhan so vua nhap la:";
	for (Phanso* j = obj; j < obj + 2; j++)
	{
		j->XuatPhanSo();
	}
	obj3.Sum(obj[0], obj[1]);
	cout << "\nTong cua hai phan so la:";
	obj3.XuatPhanSo();
	return 0;
}