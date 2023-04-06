#include <iostream>
#include <math.h>
using namespace std;

int KtraSoNTo(int num)
{ 
	if(num<2)
	{
		return 0;
	}
	else{
  	 	for (int i = 2; i <= sqrt(num); i++)
  	 	{
  	      if (num % i == 0)
         	   return 0;
   		}
	}
return 1;
}
int main()
{
	int n,h;
	cout<<"Nhap vao n:";cin>>n;
	cout<<"\nNhap vao h:";cin>>h;
    for (int num = n; num < h; num++)
    {
		if(KtraSoNTo(num))
		{
			cout<<num<<" ";
		}
    }
    return 0;
}
