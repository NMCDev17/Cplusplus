#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int n;
 cout<<"nhap vao n la:";cin>>n;
 int gthua=1; int i=1;
 if(n<=10&&n>0){
 	while(i<=n){
 		gthua=gthua*i;
 		i++;
 	 }
     cout<<"\n N!="<<gthua;
    }
 	else{
 		cout<<"\n vui long nhap lai n thoa man 0<n<=10";
	 }
 	
getch();
	
	return 0;
}

