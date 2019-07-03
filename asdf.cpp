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


typedef struct queue{
	info data[100];
	int first,last,n;
};

void init (queue &q){
	q.first=0;
	q.last=-1;
}

bool isempty(queue q){
	if (q.first==q.last+1) return true;
	else return false;
}

bool isfull(queue q){
	if (q.last==max_size-1) return true;
	else return false;
}

void nhap (info &a){
	cout<<"ma mon hoc:";cin>>a.mamh;
	cout<<"khoa:";cin>>a.khoa;
}
void xuat(info a){
	cout<<endl<<"ma mon hoc: "<<a.mamh;
	cout<<endl<<"khoa: "<<a.khoa;
}	

bool enqueue(queue &q){
	if (q.last==max_size-1){
		return false;
	}
	else{
		cout<<"nhap so phan tu:";cin>>q.n;
		for(int i=0;i<q.n;i++){
			nhap(q.data[++q.last]);
			cout<<endl;
		}
		return true;	
	}
}

bool dequeue(queue q){
	if (q.first==q.last+1){
		return false;
	}
	else{
		while(isempty(q)==false){
			xuat(q.data[q.last--]);
			cout<<endl;
		}
	}
}
int main(){
	info a;
	queue q;
	init(q);	
	isempty(q);
	isfull(q);
	enqueue(q);
	dequeue(q);
}


