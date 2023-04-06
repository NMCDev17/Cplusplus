#include<iostream>
using namespace std;

struct phanso
{
	int tu;
	int mau;
}ps[100];

void NhapPhanSo(phanso ps[],int &n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<"\nTu so thu "<<i<<": ";cin>>ps[i].tu;
		cout<<"\nMau so thu "<<i<<": ";cin>>ps[i].mau;
	}
}

void XuatPhanSo(phanso ps[],int &n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<ps[i].tu<<"/"<<ps[i].mau<<"\t";
	}
}

void TongPhanSo(phanso ps[],int n)
{
	float sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=ps[i].tu;
    }
    int mau=ps[1].mau;
    cout<<"\nTong cua mang phan so la:"<<sum<<"/"<<mau;
}
void HieuPhanSo(phanso ps[],int &n)
{
	int sum=ps[1].tu;
	for(int i=2;i<=n;i++)
	{
		sum-=ps[i].tu;
    }
    int mau=ps[1].mau;
    cout<<"\nHieu cua mang phan so la:"<<sum<<"/"<<mau;
}
void TichHaiPhanSo(phanso ps[],int &n)
{
	int tichtu=1;
	int tichmau=1;
	for(int i=1;i<=n;i++)
	{
		tichtu*=ps[i].tu;
		tichmau*=ps[i].mau;
    }
    cout<<"\nTich cua mang phan so la:"<<tichtu<<"/"<<tichmau;
}
/*void ThuongHaiPhanSo(phanso ps[],int &n)
{
	int tichtu;
	int tichmau;
	for(int i=1;i<=n;i++)
	{
		tichtu=ps[1].tu * ps[2].mau;
		tichmau=ps[1].mau * ps[2].tu;
    }
    cout<<"\nThuong cua hai phan so la:"<<tichtu<<"/"<<tichmau;
}*/

int main()
{
	int n;
	cout<<"Nhap vao so luong phan tu cua mang:";cin>>n;
	NhapPhanSo(ps,n);
	cout<<"\nDay phan so vua nhap vao : ";
	XuatPhanSo(ps,n);
	TongPhanSo(ps,n);
	HieuPhanSo(ps,n);
	TichHaiPhanSo(ps,n);
	//ThuongHaiPhanSo(ps,n);

return 0;
}
