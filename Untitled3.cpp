#include<iostream>
#include<conio.h>
#include<stdio.h>
#define max_size 100
#define info int
using namespace std;

typedef struct queue{
	info data[max_size];
	int first,last,;
}queue;

void init(queue &s){
	s.first=0;
	s.last=-1; 
}

bool IsEmpty(queue s){
	if (s.first==s.last+1)
	    return true;
	else  
	    return false;     
}

bool Isfull(queue s){
	if (s.last=max_size-1)  
	    return true;
	else  
	    return false;     
}

bool enqueue(queue &s,info a){
    if (Isfull(s)==true){
		return false;
	}
	else{
		s.data[++s.last]=a;
		return true;
    }
}

bool dequeue(queue &s,info &a){
	if (IsEmpty(s)==true){
		return false;
	}
	else{
	    a=s.data[s.first++];
	    return true;
    }
}

void nhap(queue &s){
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		info a;
		cin>>a;
		enqueue(s,a);
	}
}
void xuat(queue &s){
	while (IsEmpty(s)==false){
		info a;
		dequeue(s,a);
		cout<<a<<" ";
	}
}


int main(){
	queue(s);
	IsEmpty(s);
	Isfull(s);
	init(s);
	nhap(s);
	xuat(s);
}



