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
			printf("cac so ngto co trong mt la");
			for(i=1; i<=x; i++) 
			for (j=1; j<=y;j++)
			{for(l=1;l<=a[i][j];l++)
			{if(a[i][j]%l==0)
			k+=1;
			}
			}
			if(k==2)
			printf("%d\t",a[i][j]);
			k=0;
		}
