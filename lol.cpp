#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int m,n;
int **a;
void nhap(){

	cout<<"nhap vao m,n:";
	cin>>m>>n;
	a=new int *[m];
	for(int i=0;i<m;i++){
		a[i]=new int[n];
    }
	for (int i=0;i<m;i++)
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}
	void xuat(){
		
	for (int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
	    }
	    cout<<endl;
	}
	 
    }
int main(){
	nhap();
	xuat();
	
}
