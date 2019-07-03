#include <iostream>
 
using namespace std;

class Hinh {
   protected:
      int chieurong;
      int chieudai;
   public:
   	   void hienthi(){
   	   	   cout<<"dien tich hinh chu nhat la:";
   	   } 
   	   
};


class HinhChuNhat: private Hinh
{
   public:
      int tinhDienTich(){ 
         return chieurong * chieudai; 
      }
      void ChieuRong(int rong){
   	   		chieurong=rong;
   	  }
	  void ChieuDai(int dai){
   	   		chieudai=dai;
   	  }	  
   	  
};

int main(void)
{
   HinhChuNhat Hcn;
   Hinh h;
 
   Hcn.ChieuRong(5);
   Hcn.ChieuDai(6);

     cout << "Tong dien tich la: " << Hcn.tinhDienTich() << endl;

   return 0;
}
