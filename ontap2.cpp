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

typedef struct queue{
	info data[maxsize];
	int first,last,n;
};

void init(queue &q){
	q.first=0;
	q.last=-1;
}

bool isempty(queue q){
	if(q.first==q.last+1)
		return true;
	else return false;
}

bool isfull(queue q){
	if(q.last==maxsize-1)
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

bool enqueue(queue &q){
	if(isfull(q)==true)
		return false;
	else{
		cout<<endl<<"nhap vao so luong sinh vien:";cin>>q.n;
		for(int i=0;i<q.n;i++)
			nhap(q.data[++q.last]);
	}		
}

bool dequeue(queue q){
	while(isempty(q)==false){
		xuat(q.data[q.first++]);
	}
}

int main(){
	queue(q);
	init(q);
	isempty(q);
	isfull(q);
	enqueue(q);
	dequeue(q);
}



