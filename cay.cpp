#include<stdio.h>
#include<iostream>
#include<conio.h>
#define info int 
#define maxsize 100
using namespace std;

typedef struct simpletree{
	info label[maxsize];
	info parent[maxsize];
	int size;
}simpletree;

typedef struct simpletree *ptree;

//ham khoi tao
void init (simpletree t){
	t.size=0;
}

bool isempty(simpletree t){
	if (t.size ==0)
		return true;
	else 
		return false;
}

bool isfull(simpletree t){
	if (t.size==maxsize)
		return true;
	else 
		return false;
}

//tim con trai nhats cua mot nut
int leftmostchild(simpletree t,int i){
	for (int j=i+1;j<t.size;j++){
		if (t.parent[j]==i)
			return j;//i la cha cua j
	}
	return -1;//khong co cay con
}

//tim anh em ruot phai
int rightsibling(simpletree t,int i){
	if (i==t.size-1)
		return -1;
	else {
		int j=i+1;
		if (t.parent[i]==t.parent[j])
			return j;
		else 
			return -1;
	}
}

void nhap(simpletree &t){
	do{
			cout<<"nhap vao so luong node:";
			cin>>t.size;
	}while(isfull(t));
	for (int i=0;i<t.size;i++){
		cout<<"label["<<i<<"]=";
		cin>>t.label[i];
		cout<<"parent["<<i<<"]=";
		cin>>t.parent[i];
	}
}

void nlr (simpletree t,int i){
	if (i==-1) return;
	//goc
	cout<<t.label[i]<<" ";
	//xet cac cay con trai
	int j=leftmostchild(t,i);
	nlr(t,j);
	//xet cac cay con phai
    while (j!=-1){
    	//tim ae ruot phai cua i
    	j=rightsibling(t,j);
    	nlr(t,j);
    }
}
//chieu cao cua cay
int hight(simpletree t,int i){
	if (i==-1) return 0;
	else{
		int j=leftmostchild(t,i);
		int max=hight(t,j);
		while (j!=-1){
			j=rightsibling(t,j);
			int tg=hight (t,j);
			if (tg>max) max=tg;
		}
	return max+1;
	}
}

int main(){
	simpletree t;
	init(t);
	nhap(t);
	nlr(t,0);
	cout<<"\n chieu cao cua cay la:"<<hight(t,0);
	getch();
}
