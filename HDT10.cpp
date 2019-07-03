#include<iostream>
#include<string.h>

using namespace std;

class xau{
	private:
		char *str;
		int length;
	public:
		xau();
		xau(char *s );
		~xau();
		void nhap();
		void xuat();	
};

xau::xau(){
}

xau::xau(char* s){
	s =new char[100];
    str=s;
}
xau::~xau(){
}

void xau::nhap(){
	cout<<"nhap xau ki tu:";
	fflush(stdin);
	gets(str);
}

void xau::xuat(){
	cout<<"xau vua nhap la:";
	fflush(stdin);
    puts(str);
}
 int  main(){
 	xau x;
 	x.nhap();
 	x.xuat();	
 }
