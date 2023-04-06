#include<iostream>
using namespace std;

void Nhap(int &n){
	cout<<"nhap vao n:";cin>>n;
	}
	
	int main(){
		int n;
		Nhap(n);
		int tmp=n;
		int nDao=0;
		while(n>0){
			nDao=nDao*10+n%10;
			n/=10;
        }
    	if(tmp==nDao){
		cout<<tmp<<" la so thuan nghich"<<endl;
		}
		else{
			cout<<tmp<<" khong la so thuan nghich"<<endl;
		}
    }
		
	
	
