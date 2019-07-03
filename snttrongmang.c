#include<stdio.h>
#include <math.h>
int main() {

            int x,y,j, i,k,d, a[100][100];
            printf("Nhap so phan tu cua hang x cot y = ");
            scanf(" %d %d",&x,&y);

         for(i=0;i<x;i++){
			for (j=0;j<y;j++) {                  
				printf("a[%d][%d]= ",i,j);
			    scanf("%d",&a[i][j]);
            }

         }
         d=0;
         for(i=0;i<x;i++) {
			for (j=0;j<y;j++){
			   for(k=1;k<=a[i][j];k++){
					if(a[i][j]%k==0)
			          d=d+1;
			   }      
		       if(d==2)	printf("%d ",a[i][j]);
			   d=0;    
			}
		}
}		
