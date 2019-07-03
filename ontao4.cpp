#include<iostream>
#include<conio.h>
#include<stdio.h>
#define info int

using namespace std;
//dinh nghia mot node
typedef struct node{
	info data;
	node *next;
}node;

//dinh nghia danh sach lien ket
typedef struct list{
	node *head; 
	node *tail;
}list;

//khoi tao danh sach
void init(list *l){
	l->head=l->tail=NULL;
}
bool isempty(list *l){
	if (l->head==NULL)
	  	return true;
	else 
		return false;  	
}
//tao node trong danh sach
node* getnode(info &a){
	node *p=new node;
	if (p==NULL)
		cout<<"bo nho day";
	else{
		p->data=a;
		p->next=NULL;
	}
	return p;
}
//chen mot node vao danh sach
bool inserthead(list *l,node *p){
	if (p==NULL)
		return false;
	else{
		if (isempty(l))
			l->head=l->tail=p;
		else{
			p->next=l->head;
			l->head=p;
		}
	}
}

bool inserttail(list *l,node *p){
	if(p==NULL)
		return false;
	else{
		if(isempty(l)){
			l->tail=l->head=p;
		}
		else{
			l->tail->next=p;
			l->tail=p;
	    }
	}	
}
void nhap(list *l){
	int n;
	cout<<"nhap vao so luong phan tu: ";
	cin>>n;
	for (int i=0;i<n;i++){
		info a;
		cin>>a;
		node* p=getnode(a);
     	inserttail(l,p);
	}
}

void xuat(list l){
	node* p=l.head;
    while (p!=NULL){
		cout <<p->data<<" ";
		p=p->next;
	}
}
int main(){
	list l;
	init(&l);
	nhap(&l);
	xuat(l);
}
