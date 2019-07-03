#include<iostream>
#include<conio.h>
#include<stdio.h>
#define info int

using namespace std;
//dinh nghia mot node
typedef struct node{
	info data;	
	node *next;
	int MSV;
    char hoten[25];
}node;

//dinh nghia danh sach lien ket
typedef struct list{
	node *head; 
}list;

//dinh nghia hai con tro
typedef struct node *pnode;
typedef struct list *plist;

//khoi tao danh sach
void init(plist l){
	l->head=NULL;
}
bool isempty(list l){
	if (l.head==NULL)
	  	return true;
	else 
		return false;  	
}
//tao node trong danh sach
pnode getnode(info b,node a){
	pnode p=new node();
	if (p==NULL)
		cout<<"bo nho day";
	else{
		p->data=b;
		p->next=NULL;
		cout<<"nhap vao thong tin: \n";
		cout<<"nhap ma sv:";cin>>a.MSV;
		cout<<"nhap ho ten:";fflush(stdin);gets(a.hoten);
	//	cout<<"nhap ngay sinh:";cin>>a.ngaysinh;
	//	cout<<"gioi tinh:";fflush(stdin);gets(a.gioitinh);	
	}
	return p;
}
//chen mot node vao danh sach
bool inserthead(plist l,pnode p){
	if (p==NULL)
		return false;
	else{
		if (isempty(*l))
			l->head=p;
		else{
			p->next=l->head;
			l->head=p;
		}
	}
}

void nhap(plist l){
	int n;
	cout<<"nhap vao so luong phan tu: ";
	cin>>n;
	for (int i=0;i<n;i++){
		info a;
		cin>>a;
		pnode p=getnode(a);
		inserthead(l,p);
	}
}

void xuat(list l){
	pnode p=l.head;
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
