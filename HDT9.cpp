#include<iostream>

using namespace std;

class phanso{
	private:
		int tu ,mau;
	public:
		phanso(){
		}
		phanso(int t,int m){
			tu=t;
			mau=m;
		}
		void xuat();
	   friend istream& operator >>(istream &, phanso &);
	   friend ostream& operator <<(ostream &, phanso );
	   phanso operator +(phanso); 	
};
 
istream& operator >>(istream &is,phanso &ps){
	cout<<"\nnhap phan so:";
	is>>ps.tu>>ps.mau;
	return is;
}

ostream& operator <<(ostream &os,phanso ps){
	//os<<"phan so vua nhap la:";
	os<<ps.tu<<"/"<<ps.mau;
	return os;
}
phanso phanso::operator +(phanso ps){
	phanso tong( tu*ps.mau + ps.tu* mau , mau*ps.mau );
	return tong ;
}


int main(){
 	phanso a(1,2);
	phanso ps1,ps2;
	cin>>ps1;
	cout<<ps1;
	cin>>ps2;
	cout<<ps2;
	phanso tong=ps1+ps2;
	cout<<"\n tong cac phan so la:";
	cout<<tong;
	
}
