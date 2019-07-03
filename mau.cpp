#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>

using namespace std;
#define info sinhvien
  typedef struct data
  {
  	int ngay,thang,nam;
  };
  typedef struct info
  {   char hoten[50];
      char malop[50];
      char quequan[50] ;
      int masv;
      data ngaysinh;
  };
   typedef struct node
   {
   	   info data;
   	   node* next;
   }node;
   typedef struct list 
   {
   	    node *head;
   	    node * tail;
   }list ;
   typedef struct list *plist ;
   typedef struct node *pnode;
   void init(plist l)
   {     
		l->head=l->tail=NULL;
   }
   bool isempty(list l)
   {
   	    if(l.head==NULL)
   	    return true;
   	    else 
   	    return false;
   }
   pnode getnode(info data)  //khoi tao danh sach ban dau
   {
   	   pnode p= new node();
   	   
   	   		if(p==NULL)
				cout <<" bo nho day";
			else
			{
				p->data=data;
				p->next =NULL;
			} 
		return p;  	      
   }
  bool inserthead(plist l,pnode p)
   {
   	    if(p==NULL)
   	    	return false;
   	    else
   	      {
   	      	if(isempty(*l))
   	      	 	l->head=p;
			else
			 {
			 	p->next =l->head;
			 	l->head=p;
			 }
		  }
   }  
   void nhapds(plist l )
   { 
   	int n;
   	cout<<"nhap so luong phan tu";
   	cin >>n;
   	for(int i=0;i<n;i++)
   	{   info data;
   	    cout<<"nhap ma sinh vien :" ;
  		fflush(stdin);
		cin >> data.masv; 
  		cout<<"\nhap ten sinh vien : ";
  		fflush(stdin);
  		gets(data.hoten);
  		cout<< "\n nhap ma lop: ";
  		cin >>data.malop;
  		cout << " \n nhap ten que quan : ";
  		fflush(stdin );
  		gets(data.quequan);
  		cout <<"\n ngay sinh cua sinh vien :";
  		fflush(stdin );
  	    cin>> data.ngaysinh.ngay;
  	    cout <<"\n thang sinh cua sinh vien :";
		cin >> data.ngaysinh.thang;
		cout <<"\n nam sinh cua sinh vien :";
		cin >> data.ngaysinh.nam;
   		pnode p=getnode(data);
   		inserthead(l,p);
   	}
   }
   void xuatds(list l)
   {
   	 pnode p =l.head;
   	 while(p!=NULL)
   	 {
   	 	cout <<"\n ma sinh vien " << p->data.masv;
  	    cout <<"\n ho ten "<<p->data.hoten;
  	    cout <<"\n ma lop "<<p->data.malop;
     	cout <<" \n que quan "<<p->data.quequan;
  	    cout <<"\n ngay sinh "<<p->data.ngaysinh.ngay,p->data.ngaysinh.thang,p->data.ngaysinh.nam;
   	 	p=p->next;
   	 }
   }
   int main ()
   {
   	    list(l);
   	    init(&l);
   	    nhapds(&l);
   	    xuatds(l);
   }
   
