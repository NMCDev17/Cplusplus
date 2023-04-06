#include<iostream>
#include<cmath>

using namespace std;

struct TAMGIAC{
	float a;
	float b;
	float c;
}M,N,P;

void NhapDoDaiCanhTamGiac(TAMGIAC &M,TAMGIAC &N,TAMGIAC &P)
{
	cout<<"Nhap vao do dai MN:";cin>>M.a;
	cout<<"\nNhap vao do dai MP:";cin>>N.b;
	cout<<"\nNhap vao do dai NP:";cin>>P.c;
}

void XuatDoDaiCacCanh(TAMGIAC &M,TAMGIAC &N,TAMGIAC &P)
{
	cout<<"MN="<<M.a<<" MP="<<N.b<<" NP="<<P.c;
}

float ChuViTamGiac(TAMGIAC M,TAMGIAC N,TAMGIAC P)
{
	float primeter=0.f;
	primeter=M.a+N.b+P.c;	//tong do 3 canh tam giac;
	return primeter;
}

float DienTichTamGiac(TAMGIAC M,TAMGIAC N,TAMGIAC P)
{
	float p=0.f;
	p=1*(M.a+N.b+P.c)/2;	//nua chu vi tam giac;
	float acreage=0.f;
	acreage=sqrt(p*(p-M.a)*(p-N.b)*(p-P.c));
	return acreage;
	
}
int main()
{
	NhapDoDaiCanhTamGiac(M,N,P);
	cout<<"\nDo dai 3 canh cua tam giac la: ";XuatDoDaiCacCanh(M,N,P);
	float primeter=ChuViTamGiac(M,N,P);
	cout<<"\nChu vi tam giac la:"<<primeter;
	float acreage=DienTichTamGiac(M,N,P);
	cout<<"\nDien tich tam giac la:"<<acreage;
return 0;
}
