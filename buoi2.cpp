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
	info data[100];
	node *next;
};

typedef struct list{
	node *head;
};

typedef struct node *pnode
typedef struct node *plist

void init(plist l){
	l->head=NULL;
}

bool isempty(list l){
	if (l.head==NULL) return true;
	else return false;
} 

pnode







