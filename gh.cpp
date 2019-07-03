#include<iostream>
#include<conio.h>
#include<stdio.h>
#define max_size 100
#define info int
using namespace std;

typedef struct Queue{
	info data[max_size];
	int first,last;
}Queue;

void init(Queue &q){
	q.first=0;
	q.last=-1; 
}

bool IsEmpty(Queue q){
	if (q.first==q.last+1)
	    return true;
	else{
	    return false;
	
    }
}

bool Isfull(Queue q){
	if (q.last=max_size-1)  
	    return true;
	else  
	    return false;     
}

bool EnQueue(Queue &q,info a){
    if (Isfull(q)==true){
		return false;
	}
	else{
		q.data[++q.last]=a;
		return true;
    }
}

bool deQueue(Queue &q,info &a){
	if (IsEmpty(q)==true){
		return false;
	}
	else{
	    a=q.data[q.first++];
	    return true;
	    cout<<"sdsd";
    }
}

void nhap(Queue &q){
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		info a;
		cin>>a;
		EnQueue(q,a);
	}
}
void xuat(Queue &q){
	while (IsEmpty(q)==false){
		info a;
		deQueue(q,a);
		cout<<a<<" ";
	}
}


int main(){
	Queue(q);
	init(q);
	IsEmpty(q);
	Isfull(q);
	nhap(q);
	xuat(q);
}



