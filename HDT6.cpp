#include<iostream>
#include<string>
#include<stdio.h>
#include<conio.h>
#include<cmath>
#include<vector>
using namespace std;

class point{
  	private:
  		int x ;
  		int y;
  	public:
	  	point();
	  	point(int ,int);
		~point();
		void nhap();
		void xuat();
		double khoangcach(point b);
};
point::point(){
	x=y=0;
	cout<<"\nham khoi toa mac dinh";
}

point::point(int _x,int _y){
	x=_x;
	y=_y;
	cout<<"\nham khoi tao co tham so";
}

point::~point(){
	cout<<"\nham huy";
}

void point::nhap(){
	cout<<"\nnhap toa do diem:";cin>>x>>y;
}

void point::xuat(){
	cout<<"toa do diem la:"<<x<<"  "<<y;
}

double point:: khoangcach(point b){
	double k;
	k=sqrt((this->x-b.x)*(this->x-b.x)+(this->y-b.y)*(this->y-b.y));
	return k;
}
int main(){
	point *p;
	int n;
	cout<<"\nnhap vao so diem:";
	cin>>n;
	p=new point[n];
	for(int i=0;i<n;i++){
		p[i].nhap();
		p[i].xuat();
	}
  double max=0,k=0;
  for (int i=0;i<n;i++){
  	for(int j=0;j<n;j++){
  		k=p[i].khoangcach(p[j]);
  		if (max<k) max=k;
  	}
  }
  
//	double k=p->khoangcach(p+1);
	cout<<"\nkhoang cach lon nhat giua hai diem la:";
	cout<<max;
}
	
