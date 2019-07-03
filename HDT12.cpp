#include<iostream>

using namespace std;

class phanso{
	private:
		int tu,mau;
	public:
		phanso();
		phanso(int ,int);
		friend istream& operator>>(istream &,phanso &);
		friend ostream& operator<<(ostream &,phanso );
		phanso operator +(phanso);
};

phanso::phanso(){
}

phanso::phanso(int t,int m){
	tu=t;
	mau=m;
}

istream& operator>>(istream &is,phanso &p){
	cout<<"\nnhap vao phan so:";
	is>>p.tu>>p.mau;
	return is;
}

ostream& operator<<(ostream &os,phanso p ){
	os<<p.tu<<"/"<<p.mau;
}

phanso phanso::operator +(phanso ps){
	phanso tong(tu*ps.mau + ps.tu* mau , mau*ps.mau );
	return tong ;
}
int main(){
	phanso p1,p2;
	cin>>p1;
	cout<<p1;
	cin>>p2;
	cout<<p2;
	phanso tong=p1+p2;
	cout<<"\ntong =";
	cout<<tong;
}

