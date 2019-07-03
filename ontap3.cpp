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

typedef struct stack{
	info data[maxsize];
	int first,last,n;
};

void init(stack &s){
	s.first=0;
	s.last=-1;
}

bool isempty(stack s){
	if(s.first==s.last+1)
		return true;
	else return false;
}

bool isfull(stack s){
 	if (s.last==maxsize-1)
 		return true;
 	else return false;	
}

void nhap(info &a){
	cout<<endl<<"nhap vao thong tin:";
	cout<<"hoten:";fflush(stdin);gets(a.hoten);
	cout<<"ma sinh vien:";cin>>a.masv;
}

void xuat(info a){
	cout<<endl<<"ho ten:";puts(a.hoten);
	cout<<endl<<"ma sinh vien:"<<a.masv;
}

bool push(stack &s){
	if(isfull(s)==true)
		return false;
	else{
		cout<<"nhap vao so phan tu:";cin>>s.n;
		for(int i=0;i<s.n;i++){
			nhap(s.data[++s.last]);
		}
	}	
}

bool pop(stack s){
	while (isempty(s)==false){
		xuat(s.data[s.last--]);
	}
}

int main(){
	stack(s);
	init(s);
	isempty(s);
	isfull(s);
	push(s);
	pop(s);
}
