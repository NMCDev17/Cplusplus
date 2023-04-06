#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//khai bao lop;
class GiatLa;
class ThueXe;
class KhachSan;
class KhachHang;
class HoaDon;

//Dinh nghia lop;

class GiatLa
{
protected:
	int tiengiat;
	int kg;
	int dongia;
public:
	GiatLa();
	friend class HoaDon;
};

GiatLa::GiatLa()
{
	this->tiengiat = 0;
	this->kg = 0;
	this->dongia = 0;
}
class ThueXe
{
protected:
	int tienthue;
	int gio;
	int giathue;
public:
	ThueXe();
	friend class HoaDon;
};
ThueXe::ThueXe()
{
	this->tienthue = 0;
	this->gio = 0;
	this->giathue = 0;
}
class KhachSan
{
protected:
	GiatLa x;
	ThueXe y;
public:
	friend class HoaDon;
};

class KhachHang
{
protected:
	string name;
	string makh;
	string gioitinh;
};

class HoaDon :public KhachHang
{
protected:
	string mahd;
	int giamgiagiat = 0;
	int giamgiathue = 0;
	KhachSan ks;
public:
	void NhapHoaDon();
	void XuatHoaDon();
};

void HoaDon::NhapHoaDon()
{
	//NHAP THONG TIN KHACH HANG;
	cout << "Nhap vao ma hoa don:"; getline(cin, mahd); rewind(stdin);
	cout << "Nhap vao ten khach hang:"; getline(cin, name); rewind(stdin);
	cout << "Nhap vao ma khach hang:"; getline(cin, makh); rewind(stdin);
	cout << "Gioi tinh:"; getline(cin, gioitinh); rewind(stdin);
	//Lua cho dich vu;
	cout << "1.Giat quan ao va la quan ao!" << endl;
	cout << "2.Thue xe!" << endl;
	cout << "0.Het!" << endl;
	int key;// khoi tao 1 bien lua chon!;
	do
	{
		cout << "Lua chon dich vu:"; cin >> key;
		switch (key)
		{
		case 1: {
			cout << "Nhap vao so kg quan ao:"; cin >> ks.x.kg;
			cout << "Nhap vao don gia 1kg:"; cin >> ks.x.dongia;
			//Thuc hien tinh tien giat;
			if (ks.x.kg > 5)
			{
				giamgiagiat = 5 * (ks.x.kg * ks.x.dongia) / 100;
				ks.x.tiengiat = (ks.x.kg * ks.x.dongia) - giamgiagiat;//giam 5%;;
			}
			else
			{
				ks.x.tiengiat = ks.x.kg * ks.x.dongia;
			}
			break;
		}
		case 2:
		{
			cout << "Nhap vao so gio thue xe:"; cin >> ks.y.gio;
			cout << "Nhap vao gia thue xe 1h:"; cin >> ks.y.giathue;
			if (ks.y.gio > 10)
			{
				giamgiathue = 10 * (ks.y.giathue * ks.y.gio) / 100;
				ks.y.tienthue = (ks.y.giathue * ks.y.gio) - giamgiathue;//giam 10%;
			}
			else
			{
				ks.y.tienthue = ks.y.giathue * ks.y.gio;
			}
			break;
		}
		case 0:return;
		}
	} while (key != 0);
}

void HoaDon::XuatHoaDon()
{
	cout << "==========HOA DON SU DUNG DICH VU============" << endl;
	cout << "Ma hoa don:" << mahd << endl;
	cout << "Ten khach hang:" << name << endl;
	cout << "Ma khach hang:" << makh << endl;
	cout << left<<setw(30)<<"Cac dich vu su dung" << left << setw(10) << "So tien" << left << setw(10) << "Giam" << endl;
	cout <<left<<setw(30)<< "Giat la" << left << setw(10) << ks.x.dongia * ks.x.kg << left << setw(10) << giamgiagiat << endl;
	cout << left << setw(30) << "Thue Xe" << left << setw(10) << ks.y.giathue * ks.y.gio << left << setw(10) << giamgiathue << endl;
	cout << "Tong so tien:" <<ks.x.tiengiat + ks.y.tienthue << endl;
}

int main()
{
	HoaDon hd;
	hd.NhapHoaDon();
	hd.XuatHoaDon();
	return 0;
}