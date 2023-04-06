#include<iostream>
using namespace std;

int main()
{
	int i,n,demuoc;
	cout<<"nhap vao so tu nhien n:";cin>>n;
	demuoc=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			cout<<i<<" ";
			demuoc=demuoc+1;
		}		
	}
		cout<<"\nso uoc so cua "<<n<<" la "<<demuoc;
return 0;	
}
