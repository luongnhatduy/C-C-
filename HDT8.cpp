#include<iostream>
#include<stdio.h>
#include<string>
#include<conio.h>

using namespace std;

class thisinh{
	private:
		int masv;
		string hoten;
		int diemtoan,diemvan,t;
	
	public:
		thisinh();
		thisinh(int,string,int,int);
		int get_t() {
			return t;
		}
		void nhap();
		void xuat();	
		void tong();
		
};

thisinh::thisinh(){
}

thisinh::thisinh(int msv,string ten,int toan,int van){
	masv=msv;
	hoten=ten;
	diemtoan=toan;
	diemvan=van;
}

void thisinh::nhap(){
	cout<<"\nnhap thong tin:";
	cout<<"\n\nma sinh vien:";cin>>masv;
	cout<<"ho ten:";cin>>hoten;
	cout<<"diem toan:";cin>>diemtoan;
	cout<<"diem van:";cin>>diemvan;
	t=diemtoan+diemvan;
}

void thisinh::xuat(){
	cout<<"\nma sinh vien:"<<masv;
	cout<<"\nho va ten:"<<hoten;
	cout<<"\ndiem toan:"<<diemtoan;
	cout<<"\ndiem van:"<<diemvan;
	cout<<"\ntong diem:"<<t;
}

class dssinhvien{
	private:
		thisinh a[100];
		int n;
	public:
		dssinhvien();
		dssinhvien(int)	;
		void nhap();
		void xuat();
		void sapxep();
		friend class thisinh;
};

dssinhvien:: dssinhvien(){
}

void dssinhvien::nhap(){
	cout<<"nhap vao so luong sinh vien:";
	cin>>n;
	for(int i=0;i<n;i++){
	 	a[i].nhap();
	}
}

void dssinhvien::xuat(){
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
	cout<<endl;
}

void dssinhvien::sapxep(){
	thisinh tg;
	for(int i=0;i<n;i++){
	 	for(int j=0;j<n;j++){
			if(a[i].get_t()<a[j].get_t()){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
}

int main(){

	dssinhvien ds;
	ds.nhap();	
	ds.sapxep();
	ds.xuat();
}



