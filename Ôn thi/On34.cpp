#include<iostream>
#include<cmath>
using namespace std;

struct DIEM{
	float x;
	float y;
}A,B;
void NhapDiem(DIEM &A,DIEM &B)
{
	cout<<"Nhap vao toa do diem A co x1 va y1 la=";cin>>A.x>>A.y;
	cout<<"Nhap vao toa do diem B co x2 va y2 la=";cin>>B.x>>B.y;
}

void XuatDiem(DIEM &A,DIEM &B)
{
	cout<<"A("<<A.x<<","<<A.y<<")";
	cout<<"\nB("<<B.x<<","<<B.y<<")";
}

float KhoangCach2Diem(DIEM A,DIEM B)
{
	float length = sqrt(pow(B.x - A.x,2) + pow(B.y - A.y,2));
	return length;
}

void DiemDoiXungQuaGocToaDo(DIEM C)
{
	C.x=-1*C.x;
	if(C.y!=0)
	{
		C.y=-1*C.y;
	}
	cout<<"("<<C.x<<","<<C.y<<")";
}

void DoiXungQuaOx(DIEM C)
{
	C.y=C.y*-1;
	cout<<"("<<C.x<<","<<C.y<<")";
}
void DoiXungQuaOy(DIEM C)
{
	C.x=C.x*-1;
	cout<<"("<<C.x<<","<<C.y<<")";
}

void KiemTraViTri(DIEM C)
{
	if(C.x > 0 && C.y > 0)
	{
		cout<<"\nDiem thuoc phan tu thu 1!";
	}
	else
	{
		if(C.x > 0 && C.y < 0)
		{
			cout<<"\nDiem thuoc phan tu thu 2!";
		}
		else
		{
			if(C.x < 0 && C.y <0)
			{
				cout<<"\nDiem thuoc phan tu thu 3!";
			}
			else
			{
				cout<<"\nDiem thuoc phan tu thu 4!";
			}
		}
	}
}
int main()
{
	DIEM A,B;
	NhapDiem(A,B);
	cout<<"Tao do diem vua nhap la:"<<endl;
	XuatDiem(A,B);
	float length=KhoangCach2Diem(A,B);
	cout<<"\n-->>AB="<<length;
	cout<<"\nDiem doi xung cua A qua goc toa do la:";DiemDoiXungQuaGocToaDo(A);
	cout<<"\nDime doi xung cua B qua goc toa do la:";DiemDoiXungQuaGocToaDo(B);
	cout<<"\nDiem Doi xung cua A qua Ox la:";DoiXungQuaOx(A);
	cout<<"\nDiem doi xung cua B qua Ox la:";DoiXungQuaOx(B);
	cout<<"\nDiem Doi xung cua A qua Oy la:";DoiXungQuaOy(A);
	cout<<"\nDiem Doi xung cua B qua Oy la:";DoiXungQuaOy(B);
	KiemTraViTri(A);
	KiemTraViTri(B);
return 0;
}
