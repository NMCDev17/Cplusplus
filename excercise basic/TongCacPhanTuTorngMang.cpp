#include<iostream>
#define MAX 100
using namespace std;

void Nhap_Mang(int a[],int &n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]:";cin>>a[i];
	}
}
void Xuat_Mang(int a[],int &n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}

int Tong_Chan(int a[],int &n){
	int tong=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0)
		{
			tong+=a[i];
			cout<<"\nPhan tu chan trong mang la:"<<a[i];
		}
	}
	cout<<"\n\tTong cac phan tu chan la="<<tong;
	return tong;
}
int Tong_Le(int a[],int &n){
	int tong=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0)
		{
			tong+=a[i];
			cout<<"\nPhan tu le trong mang la:"<<a[i];
		}
	}
	cout<<"\n\tTong cac phan tu le la="<<tong;
	return tong;
}
int Tong_Am(int a[],int &n){
	int tong=0;
	for(int i=0;i<n;i++){
		if(a[i]<0)
		{
			tong+=a[i];
			cout<<"\nCac Phan tu am trong mang la:"<<a[i];
		}
	}
	cout<<"\n\tTong cac phan tu am trong mang la:"<<tong;
	return tong;
}
int Tong_Le_Am(int a[],int &n){
	int tong=0;
	for(int i=0;i<n;i++){
		if(a[i]<0&&a[i]%2!=0)
		{
			tong+=a[i];
			cout<<"\nCac Phan tu  le am trong mang la:"<<a[i];
		}
	}
	cout<<"\n\tTong cac phan tu  le am trong mang la:"<<tong;
	return tong;	
}
int Tong_Nguyen_To(int a[],int &n){
	int k,tong=0;
	for(int i=0;i<n;i++){
		if(a[i]==2){
			tong+=a[i];
	    	cout<<"\nPhan tu nguyen to la:"<<a[i];
		}
		if(a[i]>2){
			for(k=2;k<a[i];k++){
				if(a[i]%k==0){
					return false;
				}	
				cout<<"\nPhan tu nguyen to la:"<<a[i];
				tong+=a[i];			
			}
			cout<<"\n\tTong phan tu nguyen to la="<<tong;
		}
	}
	return true;
}
int main(){
	int a[MAX],n;
	cout<<"nhap so luong phan tu trong mang:";cin>>n;
	Nhap_Mang(a,n);
	cout<<"\nMang vua nhap la:";
	Xuat_Mang(a,n);
	Tong_Chan(a,n);
	Tong_Le(a,n);
	Tong_Am(a,n);
	Tong_Le_Am(a,n);
	Tong_Nguyen_To(a,n);
return 0;
}
