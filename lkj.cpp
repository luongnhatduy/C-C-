#include<stdio.h>
#include<iostream>
#include<conio.h>
void Nhap(int &x, int &y,int &z){
	cout<<"Nhap vao 3 canh tam giac";
	cin>>x>>y>>z;
}
Void Xuat(int x, int y, int z){
	cout<<"3 canh tam giac co do dai la"<<x,y,z;

}
float DienTich(int &x,int &y,int &z){
	cout<<"Dien Tich tam giac la";
	float S,P;
	P=(x+y+z)/2;
	S=sqrt(P*(P-x)*(P-y)*(P-z));
	return DienTich;
}
int main(){
	int x,y,z:
	float S,P;
	Nhap(x,y,z);
	Xuat(x,y,z);
	S=DienTich(x,y,z);
		
}
