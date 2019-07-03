#include<iostream>

using namespace std;

class dongvat{

};

class conmeo:public dongvat{
	public:
	  void keu(){
	  	cout<<"meo meo.";
	  }	
};

int main(){
    conmeo m;
    dongvat d;
    conmeo c = conmeo d;    
    c.keu();
}
	
