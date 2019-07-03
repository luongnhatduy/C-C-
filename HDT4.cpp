#include<iostream>
#include<string>

using namespace std;

class hinhtron{
	private:
		float r;
	public:

	void nhap(){
		cout<<"nhap r:";
		cin>>r;
	}
		void xuat(){
			cout<<r;
		}
		void chuvi(){
			cout<<"\nchu vi hinh tron la:"<<2*3.14*r;
		}
		void dientich(){
			cout<<"\ndien tich hinh tron la:"<<3.14*r*r;
		}
};

int main(){
	hinhtron ht;
	ht.nhap();
	ht.xuat();
	ht.chuvi();
	ht.dientich();
}
