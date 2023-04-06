#include<iostream>
using namespace std;

int main()
{
	NhapLieu:
	int n;
	cout<<"nhap vao N=";cin>>n;
	if(n%2==0){
		cout<<"nhap"<<n<<" thanh cong la so chan!"<<endl;
    }
	else{
		cout<<"Moi nhan lai N!"<<endl;
	}
		goto NhapLieu;   
}
