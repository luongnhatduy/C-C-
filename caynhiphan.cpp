#include<stdio.h>
#include<iostream>
#include<conio.h>
#define info int
#define maxsize 100;
using namespace std;

typedef struct node{
	info data;
	node *left;
	node *right;
}node;

typedef struct node *tree;

void init (tree &root){//root la goc
 	root=NULL;
}

//kiem tra rong
bool isempty(tree root){
	if(root==NULL)
		return true;
	else
		return false;
}

node *getnode(info data){
	node *p=new node();
	if (p==NULL)//khong khoi tao duoc gia tri
    {
    		cout<<"bo nho day";
    		return NULL;
    }
    else{
    	p->data=data;
    	p->left=NULL;
    	p->right=NULL;
    	return p;
    }
}

//ham chen mot nut p vao cay
bool inserttree(tree &root,node *p){
	if (p==NULL)//cap phat bo nho khong thanh cong
	{
		cout<<"bo nho day";
		return false;
	}
	else{
		if(isempty(root)){	
			root =p;
		}
		else{
			if (p->data==root->data){
				//loai bo cac gia tri bang nhau\
				return false;
			}
			else{
				if(p->data>root->data){
					inserttree(root->right,p);
				}
				else
					inserttree(root->left,p);
			}
		}
	}
}

void nhap(tree &root){
	int n;
	cout<<"nhap so luong: ";cin>>n;
	for(int i=0;i<n;i++){
		info data;
		cin>>data;
		node *p=getnode(data);
		inserttree(root,p);
	}
}
void nlr(tree root){
	if (isempty(root)) return;
	cout<<root->data<<" ";
	//de quy ve ben trai
	nlr(root->left);
	//de quy ve  ben phai
	nlr(root->right);
}

int main(){
	tree root;
	init(root);
	nhap(root);
	nlr(root);
	getch();
}
