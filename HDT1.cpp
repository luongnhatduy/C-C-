#include<iostream>
#include<string>
#include<stdio.h>
#include<conio.h>
#include<cmath>
#include<vector>
using namespace std;
class Point{
private:
    float x,y;

public:
    Point();
    Point(const Point &);
    Point(int , int );
    ~Point();

    float GetX()
    {

        return x;
    }
    float GetY()
    {

        return y;
    }
    void nhap();
    void xuat();
    friend float KhoangCach(Point a, Point b);
};
Point::Point(const Point &p)
{
    x=p.x;
    y=p.y;

}
 Point::Point(int _x, int _y)
 {
     cout<<"\nHam khoi tao Point tham so";
     x=_x;
     y=_y;
 }
Point::Point()
{
    cout<<"\nKhoi tao Point k tham so";
    x=y=0.0;
}
Point::~Point()
{
    cout<<"\nHam huy Point";
}
void Point::nhap()
{
    cout<<"\nNhap x:";
    cin>>this->x;
    cout<<"\nNhap y:";
    cin>>this->y;
}
void Point::xuat()
{
    cout<<"\n("<<this->x<<","<<this->y<<")";

}
float KhoangCach(Point a, Point b)
{
    return sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));
}

class Dagiac{
private:
    Point *a;
    int size;
public:
    Dagiac();
    ~Dagiac();
    Dagiac(const Dagiac &);

    friend istream& operator >>(istream &, Dagiac &);
    friend ostream& operator <<(ostream &, Dagiac &);
    friend bool KiemTra(Dagiac d);
};
Dagiac::Dagiac(const Dagiac &d)
{
    size=d.size;
    a=new Point[size];
    for(int i=0; i<size;i++)
    {
        a[i]=d.a[i];
    }


}
bool KiemTra(Dagiac d)
{
    float canh1=KhoangCach(d.a[0],d.a[1]);
    float canh2=KhoangCach(d.a[0],d.a[2]);
    float canh3=KhoangCach(d.a[1],d.a[2]);
    if(/*d.a[0].GetX()!=d.a[1].GetX() && d.a[0].GetX()!=d.a[2].GetX() &&*/(canh1+canh2)>canh3 && (canh1+canh3)>canh2 &&(canh2+canh3)>canh1)
        return true;
    return false;
}
Dagiac::Dagiac()
{
    cout<<"\nKhoi tao da giac";
    size=0;
    a=new Point[size];

}
Dagiac::~Dagiac()
{
    cout<<"\nHam huy Da GIac";
    delete a;
}
istream& operator >>(istream &is, Dagiac &d)
{
    cout<<"\nNhap size:";
    is>>d.size;
    d.a=new Point[d.size];
    cout<<"\nNhap point:";
    for(int i=0; i<d.size;i++)
    {
        d.a[i].nhap();
    }
    return is;
}
ostream& operator <<(ostream &os, Dagiac &d)
{
    for(int i=0; i<d.size;i++)
    {
        d.a[i].xuat();
    }
   return os;
}

int main()
{
    vector<Dagiac>ds;
    int n;
    cout<<"\nNhap n=";
    cin>>n;
    for(int i=0; i<n;i++)
    {
        Dagiac d;
        cin>>d;
        ds.push_back(d);

    }
    cout<<"\nXuatDS\n";
    for(int i=0; i<n;i++)
    {
        cout<<ds[i]<<endl;
    }
     cout<<"\nXuatTamGiac\n";
    for(int i=0; i<n;i++)
    {

        if(KiemTra(ds[i]))
            cout<<ds[i]<<endl;
    }

    getch();
    return 0;


}
