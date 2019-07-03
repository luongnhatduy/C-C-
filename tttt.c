#include<stdio.h>
#include <math.h>
 int n,i,l=0;
int main() {
do{

           
            printf ("nhap vao 1 so n:");
            scanf("%d,&n");
            }
            while(n<0);
           for (i=1;i<=n;i++)
           {
            l=l+1/pow(n,3);}
           
            printf("tong la %d \n",l);
        }
