#include<iostream>
#include<conio.h>
#include<stdio.h>
#define max_size 100
#define info monhoc
using namespace std;

typedef struct info{
    int Mamh;
    char tenmh[25];
    char khoa[25];
};

typedef struct Stack{
	info data[100];
	int first,last,n;
}Stack;

void init(Stack &s){
	s.first=0;
	s.last=-1; 
}

bool IsEmpty(Stack s){
	if (s.first==s.last+1)
	    return true;
	else  
	    return false;     
}

bool Isfull(Stack s){
	if (s.last==100-1)  
	    return true;
	else  
	    return false;     
}
void nhap(info &a){
	cout<<"nhap vao thong tin: \n";
	cout<<"nhap ma mon hoc:";cin>>a.Mamh;
	cout<<"nhap ten mon hoc:";fflush(stdin);gets(a.tenmh);
	cout<<"khoa:";fflush(stdin);gets(a.khoa);	
}

void xuat(info a){
	cout<<endl<<"ma mon hoc: "<<a.Mamh;
	cout<<endl<<"ten mon hoc: "<<a.tenmh;
	cout<<endl<<"khoa:"<<a.khoa<<endl;
}


bool push(Stack &s){
	if (Isfull(s)==true){
		return false;
	}
	else{
	cout<<endl<<"nhap vao so mon:";
	cin>>s.n;	
	for(int i=0;i<s.n;i++)
	nhap(s.data[i]);
	return true;
	}		
}

bool pop(Stack s){
	if (IsEmpty(s)==true){
		return false;
	}
	else{
	for(int i=0;i<s.n;i++)
	xuat(s.data[i]);
	return true;
	}		
}

int main(){
	Stack L;
    IsEmpty(L);
    Isfull(L);
    init(L);
	push(L);
	pop(L);
	
}







