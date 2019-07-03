#include<stdio.h>
#include<conio.h>
#include<iostream>
#define info sinhvien

using namespace std;

typedef struct info{
	int masv;
	char hoten[100];
};

typedef struct node{
	info data;
	node* next;
};

typedef struct list{
	node* head;
	node* tail;
};

void init(list *l){
	l->head=l->tail=NULL;
}

bool isempty(list *l){
	if(l->head==NULL){
		return true;
	}
	else return false;
}

node* getnode(info &a){
	node* p=new node;
	if(p==NULL ) cout<<"bo nho day";
	else{
		p->data=a;
		p->next=NULL;
	}
	return p;
}

bool inserttail(list *l,node *p){
	if(p==NULL){
		return false;
	}
	else{
		if(isempty(l))
			l->head=l->tail=p;
		else{
			l->tail->next=p;
			l->tail=p;
		}	
	}
}

void nhap(list *l){
	int n;
	cout<<"nhap vao so luong sinh vien:";cin>>n;
	for(int i=0;i<n;i++){
		info a;
		cout<<"ho ten:";fflush(stdin);gets(a.hoten);
		cout<<"ma sinh vien:";cin>>a.masv;
		node *p=getnode(a);
		inserttail(l,p);
	}
}

void xuat(list l){
	node* p=l.head;
	while(p!=NULL){
		cout<<"ho ten:";puts(p->data.hoten);
		cout<<"ma sinh vien:"<<p->data.masv;
		p=p->next;
	}
}

int main(){
    list(l);
    init(&l);
    isempty(&l);
    nhap(&l);
    xuat(l);
}












