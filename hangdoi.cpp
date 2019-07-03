#include<iostream>
#include<conio.h>
#include<stdio.h>
#define max_size 100
#define info monhoc
using namespace std;

typedef struct info{
	int mamh;
	char ten[25];
	char khoa[25];
};

typedef struct queue{
	info data[max_size];
	int first,last,n;
};

void init(queue &q){
	q.first=0;
	q.last=-1;
}

bool isempty(queue q){
     if (q.first==q.last+1){
     	return true;
     }	
     else{
     	return false;
     }
}

bool isfull(queue q){
	if (q.last==max_size-1){
		return true;
	}
	else{
		return false;
		
	}
}

void  nhap(info &a){
    cout<<"nhap vao thong tin";
	cout<<endl<<"nhap ma mon hoc:";cin>>a.mamh;
	cout<<"nhap ten mon hoc:";fflush(stdin);gets(a.ten);
	cout<<"khoa:";fflush(stdin);gets(a.khoa);	
	cout<<endl;
}

void xuat(info a){
	cout<<endl<<"ma mon hoc: "<<a.mamh;
	cout<<endl<<"ten mon hoc: "<<a.ten;
	cout<<endl<<"khoa: "<<a.khoa;
}	

bool enqueue(queue &q){
	if (isfull(q)==true){
		return false;
	}
	else{
		cout<<"nhap so mon:";cin>>q.n;
		for(int i=0;i<q.n;i++){
	//	nhap(q.data[i]);
		nhap(q.data[++q.last]);	
	    }
	   	return true;
	}
}

bool dequeue(queue &q){
	if (isempty(q)==true){
		return false;
	}
	else{
		while (isempty(q)==false){
		xuat(q.data[q.first++]);
		cout<<endl;
		}
		return true;
    }
}

void output(queue q){
	for(int i=q.n-1;i>=0;i--){
		xuat(q.data[i]);
		cout<<endl;
		
	}
}
int main(){
//	info a;
	queue(q);
	init(q);
	isempty(q);
	isfull(q);
	enqueue(q);
	//output(q);
	dequeue(q);
}


























