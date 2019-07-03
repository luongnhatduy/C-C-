#include <iostream> 
using namespace std;

int dt=0; 
class Hinh {
   protected:
      int chieurong, chieucao;
   public:
      virtual void dientich() {
      }
};

class HinhChuNhat: public Hinh{
   public:
      HinhChuNhat( int a, int b)
	  {
         chieurong = a;
         chieucao = b;
      }
      void dientich ()
      { 
         dt= (chieurong * chieucao);
         cout << "Dien tich cua lop HinhChuNhat la: " << dt << endl;
           
      }
};
class TamGiac: public Hinh{
   public:
      TamGiac( int a, int b)
      {
         chieurong = a;
         chieucao = b;
      }
      void dientich ()
      { 
         dt= (chieurong * chieucao / 2);
         cout << "Dien tich cua lop TamGiac la: " << dt << endl;
      }
};

int main( )
{
   Hinh *h;
   HinhChuNhat hcn(13,6);
   TamGiac  tag(8, 9);

   h = &hcn;
   h->dientich();

   h= &tag;
   h->dientich();
   
   return 0;
}


