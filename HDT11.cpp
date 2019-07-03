#include<iostream>
#include<string.h>
using namespace std;

class xau{
	private:
		char *str;
		int length;
	public:
		xau();
		xau(char *s);
		friend istream& operator>>(istream &,xau &);
		friend ostream& operator<<(ostream &,xau ); 	
};
xau::xau(){
	str=new char[100];
}

xau::xau(char *s){
	str=new char[100];
	strcpy(str,s);
	
}

istream& operator>>(istream &is,xau &x){
	cout<<"nhap vao xau ki tu:";
	is>>x.str;
	return is;
}	
 
 
ostream& operator<<(ostream &os,xau x ){
	os<<"\nxau ki tu vua nhap la:"<<x.str;
	return os;
}

int main(){
	xau x;
	xau k((char*)"kjgjkjkjjkjjhbkjjkkjjk");
	cout<<k;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	 
