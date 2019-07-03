#include <iostream>
 
using namespace std;

class Hinh {
   protected:
      int chieurong;
      int chieudai;
   public:
   	   void ChieuRong(int rong){
   	   		chieurong=rong;
   	   }
	   void ChieuDai(int dai){
   	   		chieudai=dai;
   	   }	   
};


class HinhChuNhat: public Hinh
{
   public:
      int tinhDienTich()
      { 
         return chieurong * chieudai; 
      }
};

int main(void)
{
   HinhChuNhat Hcn;
 
   Hcn.ChieuRong(5);
   Hcn.ChieuDai(6);

     cout << "Tong dien tich la: " << Hcn.tinhDienTich() << endl;

   return 0;
}
