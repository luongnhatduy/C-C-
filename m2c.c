#include <stdio.h>
#include <math.h>
int main() {

            int x,y,j, i,k=0, a[100][100];

            printf("Nhap so phan tu cua hang x cot y = ");

            scanf(" %d %d",&x,&y);

         for(i=0; i<x; i++) 
			for (j=0; j<y;j++)
			{

                        printf("a[%d][%d]: ",i,j);

                        scanf("%d",&a[i][j]);

            }
          for(i=0; i<x; i++) 
		{
				for (j=0; j<y;j++)
			
			
                         printf("%4d", a[i][j]);
  printf("\n");   
}
}
