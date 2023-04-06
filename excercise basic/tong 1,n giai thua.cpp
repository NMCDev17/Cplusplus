#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int n,i,gthua; float sum=0;
cout<<"nhap vao gia tri cua n:";cin>>n;
if(n>0&&n<10){
	gthua=1; i=1;
	while(i<=n){
		gthua=gthua*i;
		sum=sum+1.0/gthua;
		i++;
	}
	cout<<"\n tong giai thua trong de bai la="<<sum;
}else{
	cout<<"\n vui long nhap lai n thoa man 0<n<10";
}
getch();
return 0;
}
