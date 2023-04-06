#include<iostream>
#include<math.h>
using namespace std;


int KiemTraSoNguyenTo(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cout<<n<<" khong la so nguyen to"<<endl;
			return 0;
		}
	}
	cout<<n<<" la so nguyen to!"<<endl;
	return 1;
}
int main(){
	int n;
	cout<<"Nhap vao n:";cin>>n;
	if(n<2){
		cout<<n<<" khong la so nguyen to!"<<endl;
	}
	else{
		KiemTraSoNguyenTo(n);
	}
}	

	
