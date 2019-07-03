#include<stdio.h>
#include <math.h>
 int x, k=0,l=0;
int main() {

           
            printf ("nhap vao 1 so x");
            scanf("%d,&x");
            if (x%2==0)
           {
        
            k=k+(3*x*x*x*x+2*x*x*x+4*x*x+1);}
            else
           {
            l=l+(6*x*x*x+3*x*x+5*x+10);}
            printf("tong  chan la %d \n",k);
            printf("tong le la %d \n",l);
        }
