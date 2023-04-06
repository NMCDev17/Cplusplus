#include<iostream>
using namespace std;


void NhapMang(int a[], int n)
{
	for (int i =0; i < n; i++)
	{
		cout << "a[" << i << "]:"; cin >> a[i];
	}
}

void XuatMang(int* a, int n)
{
	for (int* i = a; i < a + n; i++)
	{
		cout << *i<<"\t";
	}
}

bool CheckGiam(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] < a[i+1])
		{
			return false;
		}
	}
	return true;
}

bool CheckTang(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] > a[i+1])
		{
			return false;
		}
	}
	return true;
}

void SapXepTangDan(int a[], int n)
{
	int t_temp ;
	for (int i = 0; i < n-1; i++)
	{
		for(int j=0;j<n;j++)
		{
			if (a[i] >a[j])
			{
				t_temp = a[i];
				a[i] = a[j];
				a[j] = t_temp;
			}
		}
	}
}

void SapXepGiamDan(int a[], int n)
{
	int g_temp ;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i+1; j <  n; j++)
		{
			if (a[i] < a[j])
			{
				g_temp = a[i];
				a[i] = a[j];
				a[j] = g_temp;
			}
		}
	}
}
int main()
{
	int a[100], n;
	cout << "Nhap vao so luong phan tu trong mang:"; cin >> n;
	NhapMang(a, n);
	cout << "Mang vua nhap la:";
	XuatMang(a, n);
	cout << "\nThuc hien kiem tra sap xep!"<<endl;
	if (CheckTang(a, n)==true)
	{
		cout << "Cac phan tu trong mang duoc sap xep tang dan!" << endl;
		cout << "Thuc hien sap xep giam dan:";
		SapXepGiamDan(a, n);
		XuatMang(a, n);
	}
	else
	{
		if (CheckGiam(a, n)==true)
		{
			cout << "Cac phan tu trong mang duoc sap xep giam dan!"<<endl;
			cout << "Thuc hien sap xep tang dan:";
			SapXepTangDan(a, n);
			XuatMang(a, n);
		}
		else
		{
			cout << "Mang chua duoc sap xep!";
		}
	}
	return 0;
}