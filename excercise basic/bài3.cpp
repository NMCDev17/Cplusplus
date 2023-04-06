#include <iostream>
#include <math.h>
using namespace std;
int main() {
    for(int x=1; x<=20; x++){
        for (int y=1;y<=33;y++){
            for (int z=3;z<=100;z++){
                if ( (x+y+z==100) && (x*5+y*3+z/3==100) )
                {
                    cout<<"Trau dung "<<x<<" ";
                    cout<<"Trau nam "<<y<<" ";
                    cout<<"Trau gia "<<z<<endl;
                }
            }
        }
    }
}
