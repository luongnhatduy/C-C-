#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
using namespace std;

class sinhvien {
	private:
		int masv;
		string ten;
	public:
		sinhvien(){
		};
	void nhap();
	void xuat();
};
	void sinhvien::nhap(){
			cout<<"masv:";cin>>masv;
			fflush(stdin);
			cout<<"ho ten";getline(cin,ten);
		}
		
		void sinhvien::xuat (){
			cout<<"masv:"<<masv<<endl;
			cout<<"ho ten:"<<ten<<endl;
		}
int main(){
	sinhvien sv;
	sv.nhap();
	sv.xuat();
	system("pause");
	return 0;
}
