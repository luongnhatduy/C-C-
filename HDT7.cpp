#include<iostream>

using namespace std;
class Point{
private:
    float x,*y;

public:
    Point();
    Point(const Point &);
   Point(int , int );
    ~Point();
    void nhap();
    void xuat();
 
};
Point::Point(const Point &p)
{
	cout<<"\nham khoi tao sao chep";
    x=p.x;
    y=new float;
    y=p.y;

}
 Point::Point(int _x, int _y)
 {
     cout<<"\nHam khoi tao Point tham so";
       x=_x;
       y=new float;
      *y=_y;
 }
Point::Point()
{
    cout<<"\nKhoi tao Point k tham so";
    y=new float;
    x=*y=0.0;
}
Point::~Point()
{
    cout<<"\nHam huy Point";
}
void Point::nhap()
{
    cout<<"\nNhap x:";
    cin>>x;
    cout<<"\nNhap y:";
    cin>>*y;
}
void Point::xuat()
{
    cout<<"\n("<<x<<","<<*y<<")";

}

int main(){
	//Point p1,p2;
//	p1.nhap();
	//p1.xuat();
//	p2.nhap();
//	p2.xuat();
    
	Point p3(5,5);
    Point p4(p3);
    p3.xuat();
    p4.xuat();
    
    
;}
	
