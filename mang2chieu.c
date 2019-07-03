#include<stdio.h>
#include <math.h>
int main() {

            int x,y,j, i,k,l, a[100][100];
do
{
            printf("Nhap so phan tu cua hang x cot y = ");

            scanf(" %d %d",&x,&y);
}
while ((x<1 )||(x>=5));
while ((y<1)|| (y>=5));
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
           // sap xep//
 for( i=1;i<=x;i++)
        for( j=1;j<=y;j++)
            for( k=1;k<=x;k++)
                for( l=1;l<=y;l++)
                    if(a[4][j]>a[4][l])
                            {
                            	int temp=a[4][j];
                            	a[4][j]=a[4][l];
                            	a[4][l]=temp;
							}
                            
                 
				 printf("\n  day sau khi sap xep hang 4: \n");   
 for(i=1; i<=x; i++) 
			for (j=1; j<=y;j++)
			{printf ("%d\t", a[i][j]);
			if (j==y)
			printf ("\n");}
}
