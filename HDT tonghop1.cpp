#include<iostream>
#include<string>
using namespace std;

class nguoi{
	protected:
		string hoten;
		int sodt;
		string diachi;
	public:
		nguoi();
		
};
class bandoc:public nguoi{
	private:
		int mathedoc;
		string loaibd;
	public:
		bandoc();
		friend class muonsach;
};

class sach{
	private:
		int masach,namxb;
		string tensach,tacgia,nganh;
	public:
		sach();
		friend class muonsach;
};

class muonsach{
	
};

int main(){
	
}
