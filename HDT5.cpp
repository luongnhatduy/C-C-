#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class tamgiac{

	private:
		int a,b,c;
	public:
	//	tamgiac();
		void nhap(){
			do{
				
				cout<<"nhap vao do dai ba canh tam giac:";
				cin>>a>>b>>c;
				
            }while((((a+b)<c) or ((a+c)<b) or ((b+c)<a))) ;
	   }
       
		void xuat(){
			cout<<"do dai ba canh tam giac la:"<<a<<"  "<<b<<"  "<<c;
		}
};

int main(){
	tamgiac tg;
	tg.nhap();
	tg.xuat();
	
	system("pause");
	return 0;
}

