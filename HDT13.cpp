#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class thisinh
{
	private:
		int sobaodanh;
		float diemtoan;
		float diemhoa;
		float diemly;
	public:
		thisinh();
		thisinh(int ,float,float,float);
		~thisinh();
		void nhap();
		void xuat();
};
thisinh::thisinh()
{
	sobaodanh=0;
	diemtoan=0;
	diemly=0;
	diemhoa=0;
}
thisinh::thisinh(int sbd, float toan,float ly, float hoa)
{
	sobaodanh=sbd;
	diemtoan=toan;
	diemly=ly;
	diemhoa=hoa;
}
thisinh::~thisinh()
{
	cout<<"huy bo thong tin thi sinh";	
}
void thisinh::nhap()
{
	cout<<" nhap so bao danh thi sinh ";
	cin >> sobaodanh;
	cout<<"nhap diem toan ";
	cin >> diemtoan;
	cout<<"nhap diem ly";
	cin >> diemly;
	cout <<"nhap diem hoa ";
	cin >> diemhoa;
}
void thisinh ::xuat()
{
	cout<<"xuat thong tin thi sinh";
	cout<<"so bao danh" <<endl << sobaodanh;
	cout<<"diem toan "<< endl << diemtoan;
	cout<<"diem ly" << endl <<diemly;
	cout<<"diem hoa"<< endl << diemhoa;
}
class dsthisinh: public thisinh
{
	private:
		int ds;
	public:
		dsthisinh();
		~dsthisinh();
	void nhapds();
	void xuatds();
};
dsthisinh::dsthisinh()
{
	ds=0;
}
dsthisinh::~dsthisinh()
{
	
}
void dsthisinh::nhapds()
{   
thisinh::nhap();
	cout<<"nhap danh sach thi sinh";
//	cin >> ds;
}
void dsthisinh::xuatds()
{
	thisinh ::xuat();
	cout<<"xuat thong tin thi sinh ";
//	cout<< ds;
}
int main()
{
	int n;
    cout<<"nhap so luong thi sinh ";
    cin >>n ;
	dsthisinh ds[n];

    for(int i=0;i<n;i++)
    {
    	 //ds[i] = new dsthisinh();
         ds[i].nhapds();
    }
     cout<<" xuat thong tin thi sinh ";
     for(int i=0;i<n ;i++)
     {
     	 ds[i].xuatds();
     }
}
/*#include<iostream>
#include<string>

using namespace std;


class dsthisinh {
	protected:
		int n;
		int *ds;
	public:
		dsthisinh();
		void nhap();
		void xuat();	
};

class thisinh :public dsthisinh{
	private:
		int diemtoan,diemhoa,diemli;
		string sbd;	
	public:
	thisinh();
	void nhap();
	void xuat();	
	istream & operator >>(istream &,thisinh &);
};


thisinh::thisinh(){	
}

dsthisinh::dsthisinh(){
	ds=new int[100];
}

istream & operator >>(istream &is,thisinh &x){
	int n;
	cout<<"nhap vao so sinh vien:";is>>n;
	for(int i=0;i<n;i++){
	    cout<<"\nnhap thong tin sinh vien:";
	    cout<<"diem toan=";is>>x[i].diemtoan;
    }
}

int main(){
	thisinh t;
	dsthisinh ds;
}*/


