#include<stdio.h>
#include<conio.h>
#include<iostream>
#define max_size 100
#define info monhoc
using namespace std;

typedef struct info{
	int mamh;
	int khoa;
};


typedef struct stack{
	info data[100];
	int first,last,n;
};

void init (stack &s){
	s.first=0;
	s.last=-1;
}

bool isempty(stack s){
	if (s.first==s.last+1) return true;
	else return false;
}

bool isfull(stack s){
	if (s.last==max_size-1) return true;
	else return false;
}

void nhap(info &a){
	cout<<"ma mon hoc:";cin>>a.mamh;
	cout<<"khoa:";cin>>a.khoa;
}
void xuat(info a){
	cout<<endl<<"ma mon hoc:"<<a.mamh;
	cout<<endl<<"khoa:"<<a.khoa;
}

bool push(stack &s){
	if(s.last==max_size-1){
		return false;
	}
	else{
		cout<<"nhap so phan tu:";cin>>s.n;
		for(int i=0;i<s.n;i++){
			nhap(s.data[++s.last]);
			cout<<endl;
		}
		return true;	
	}
}

bool pop(stack s){
	if (s.first==s.last+1) return false;
	else{
		while(s.first==s.last+1){
			xuat(s.data[s.last--]);
			cout<<endl;
		}
	}
}

int main(){
	info a;
	stack s;
	init(s);
	isempty(s);
	isfull(s);
	push(s);
	pop(s);
}


