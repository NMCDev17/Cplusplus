#include<iostream>
#define MAX 100
using namespace std;

void Nhap_Mang(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]:";cin>>a[i];
	}
}
void Xuat_Mang(int a[],int &n){
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
void Dem_Liet_Ke_Chan(int a[],int &n)
{
	int demchan=0;
	for(int i=0;i<n;i++){
    	if(a[i]%2==0)
    	{
        	cout<<"\nPhan tu chan trong mang la: "<<a[i];
        	demchan++;
    	}
	}
	cout<<"\n\tSo phan tu chan trong mang la: "<<demchan;
}
void Dem_Liet_Ke_Le(int a[],int &n){
	int demle=0;
	for(int i=0;i<n;i++){
    	if(a[i]%2!=0)
    	{
        	cout<<"\nPhan tu le trong mang la: "<<a[i];
        	demle++;
    	}
	}
	cout<<"\n\tSo phan tu le trong mang la: "<<demle;
}
	


int main()
{
	int a[MAX],i,n;
	cout<<"nhap vao so luong phan tu cua mang:";cin>>n;
	Nhap_Mang(a,n);
	cout<<"Mang vua nhap la:";
	Xuat_Mang(a,n);
	Dem_Liet_Ke_Chan(a,n);
	Dem_Liet_Ke_Le(a,n);
return 0;
}
		
