#include<stdio.h>
#include <math.h>
int main() {

            int x,y,j, i,k=0,l,m,min, a[100][100];
            printf("Nhap so phan tu cua hang x cot y = ");

            scanf(" %d %d",&x,&y);

         for(i=1; i<=x; i++) 
			for (j=1; j<=y;j++)
			{

                        printf("a[%d][%d]: ",i,j);

                        scanf("%d",&a[i][j]);

            }
             for(i=1; i<=x; i++) 
			for (j=1; j<=y;j++)
			{printf ("%d\t", a[i][j]);
			if (j==y)
			printf ("\n");}
			 for(i=1; i<=x; i++) 
			for (j=1; j<=y;j++)
			{
			if(a[i][j]%3==0)
			k+=a[i][j];
			}
			printf("tong cac so chia het cho 3 la:%d\n",k);
			min=a[1][1];
			 for(i=1; i<=x; i++) 
			for (j=1; j<=y;j++)
			
			{if(min>a[i][j])
			{min=a[i][j];
			}
			}
			printf("so nn trong dãy la:%d\n",min);
			}
			
