#include<stdio.h>
#include <math.h>
int main() {

            int n, i,j,t=0, a[100];

            printf("Nhap so phan tu cua day n = ");

            scanf("%d",&n);

            for(i=0; i<n; i++) {

                        printf("a[%d]= ",i);

                        scanf("%d",&a[i]);

            }
 			 for(i=0; i<n; i++) {
                       printf("%d ",a[i]);
 			}
 			printf("cac so hh trong dãy la:\t");
 			  for(i=0; i<n; i++)
 		      	for(j=1;j<a[i];j++)
 		         	{
			        if(a[i]%j==0)
 		         	{
		            	 t=t+j;
			        }
			        
 			          if(t==a[i])
 			          {
			             printf("%d\t",t);
			           }
 			           }
 			           }
 			
 			
