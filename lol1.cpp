#include<stdio.h>
#include<conio.h>
#include<iostream>

#define info sinhvien
#define max_size 100
using namespace std;

typedef struct sinhvien{
	int masv;
	char hoten[100];
}; 

typedef struct list{
	info data[100];
	int size;
};

void init (list &l){
	l.size=0;
}

bool isempty(list l){
	if (l.size==0)  return true;
	else return false;
}

bool isfull(list l){
	if(l.size==max_size-1) return true;
	else return false;
}

void nhap(info &a){
	cout<<"ma sinh vien:";cin>>a.masv;
	cout<<"hoten:";fflush(stdin);gets(a.hoten);
}

void xuat(info a){
	cout<<endl<<"ma sinh vien:"<<a.masv;
	cout<<endl<<"ho ten:"<<a.hoten;
}

void input(list &l){
	cout<<"nhap vao so sinh vien:";cin>>l.size;
	for (int i=0;i<l.size;i++){
		nhap(l.data[i]);
		cout<<endl;
	}
}

void output(list l){
	for (int i=0;i<l.size;i++){
		xuat(l.data[i]);
	}
}

int main(){
	list l;
	init(l);
	isempty(l);
	isfull(l);
	input(l);
	output(l);
}








