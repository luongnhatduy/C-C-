#include<iostream>

using namespace std;

class indulieu{
	public:
		void in(int a){
			cout<<"in so nguyen :"<<a<<endl;
		}
		
		void in(string s){
			cout<<"in chuoi ki tu:"<<s;
		}
};

int main(){
	indulieu idl;
	idl.in(123);
	idl.in("luong nhat duy");
}
