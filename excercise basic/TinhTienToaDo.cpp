#include<iostream>
using namespace std;
class Point
{
	int x;
	int y;
	public:
		Point(int x=0,int y=0)
		{
			x=x;
			y=y;
		}
		void NhapToaDoDiem();
		void DisPlay();
		void Move(int,int);
};
void Point::NhapToaDoDiem()
{
	cout<<"Nhap vao toa do x:";cin>>x;
	cout<<"Nhap vao toa do y:";cin>>y;	
}

void Point::DisPlay()
{
	cout<<"("<<x<<","<<y<<")"<<" ";
}

void Point::Move(int dx,int dy)
{
	x = x + dx;
	y= y+dy;	
}
int main()
{
	Point *p = new Point[100];
	int n;cout<<"Nhap vao so luong diem:";cin>>n;
	// nhap toa do diem;
	int temp=0;
	for(Point *i=p;i<p+n;i++)
	{
		cout<<"\nDiem thu "<<temp+1<<":"<<endl;
		i->NhapToaDoDiem();
		temp++;
	}
	temp = 0;
	//truoc khi tinh tien;
	for(Point *j=p;j<p+n;j++)
	{
		cout<<"\nDiem thu "<<temp+1<<":"<<endl;
		j->DisPlay();
		temp++;
	}
	//tien hanh tinh tien;
	for(Point *z=p;z<p+n;z++)
	{
		z->Move(10,10);
	}
	//sau khi tinh tien;
	temp = 0;
	for(Point *h=p;h<p+n;h++)
	{
		cout<<"\nDiem tinh tien thu "<<temp+1<<":"<<endl;
		h->DisPlay();
		temp++;
	}
	return 0;
}
