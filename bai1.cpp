#include<iostream>
#include<conio.h>
#include<stdio.h>
#define info sinhvien
#define max_size 100
using namespace std;

typedef struct info{
	int MSV;
    char hoten[25];
    int ngaysinh;
    char gioitinh[25];
};
typedef struct node{
	info data;
	node *next;
}node;

typedef struct list{
	node *head; 
}list;

typedef struct node *pnode;
typedef struct list *plist;

void init(plist l){
	l->head=NULL;
}
bool isempty(list l){
	if (l.head==NULL)
	  	return true;
	else 
		return false;  	
}

pnode getnode(info a){
	pnode p=new node;
	if (p==NULL)
		cout<<"bo nho day";
	else{
		p->data=a;
		p->next=NULL;
	}
	return p;
}
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

void nhap(info &a){
	cout<<"nhap vao thong tin: \n";
	cout<<"nhap ma sv:";cin>>a.MSV;
	cout<<"nhap ho ten:";fflush(stdin);gets(a.hoten);
	cout<<"nhap ngay sinh:";cin>>a.ngaysinh;
	cout<<"gioi tinh:";fflush(stdin);gets(a.gioitinh);	
}

void xuat(info a){
	cout<<endl<<"ma sinh vien: "<<a.MSV;
	cout<<endl<<"ho ten: "<<a.hoten;
	cout<<endl<<"ngaysinh:"<<a.ngaysinh;
	cout<<endl<<"gioitinh:"<<a.gioitinh<<endl;
}
void in(plist l){
	int n;
	info a;
	cout<<"nhap vao so luong phan tu: ";
	cin>>n;	
	for (int i=0;i<n;i++){
		nhap(a);
		pnode p=getnode(a);
		inserthead(l,p);
	}
}

void out(list l){
	pnode p=l.head;
	while (p!=NULL){
	    xuat(p->data);
		p=p->next;
	}
}
int main(){
	list l;
	init(&l);
	in(&l);
	out(l);
}

