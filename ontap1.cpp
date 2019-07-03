#include<stdio.h>
#include<conio.h>
#include<iostream>
#define maxsize 100
#define info sinhvien
using namespace std;

typedef struct info{
	int masv;
	char hoten[100];
};

typedef struct list{
	info data[100];
	int size;
};

void init (list l){
	l.size=0;
}

bool isempty(list l){
	if(l.size==0)
		return true;
	else return false;	
}

bool isfull(list l){
	if(l.size==maxsize-1)
		return true;
	else return false;	
}

void nhap(info &a){
	cout<<"nhap vao thong tin sinh vien:";
	cout<<"ho ten:";fflush(stdin);gets(a.hoten);
	cout<<"ma sinh vien";cin>>a.masv;
}

void xuat(info a){
	cout<<"hoten:";puts(a.hoten);
	cout<<"ma sinh vien:"<<a.masv;
}

void input(list &l){
	cout<<"nhap vao so luong sinh vien:";cin>>l.size;
	for(int i=0;i<l.size;i++){
		nhap(l.data[i]);
	}
}

void output(list l){
	for (int i=0;i<l.size;i++){
		xuat(l.data[i]);
	}
}

int main(){
	list l;
	isempty(l);
	isfull(l);
	init(l);
	input(l);
	output(l);
}



