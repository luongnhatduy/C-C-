#include<stdio.h>
#include <math.h>
int main() {

            int n, i,j, a[100];

            printf("Nhap so phan tu cua day n = ");

            scanf("%d",&n);

            for(i=0; i<n; i++) {

                        printf("a[%d]= ",i);

                        scanf("%d",&a[i]);

            }
 			 for(i=0; i<n; i++) {
                       printf("%d ",a[i]);
 			}
 			int t=0,d=0;
 			float b=0;
 			for (i=0;i<n;i++){
 				if (a[i]%2==0&&a[i]%3==0){
 					t=t+a[i];
 					d=d+1;
 				}
 			}
 			if (t!=0){
 				b=t/(d*1.0);
 				printf("ket qua cau b: %0.2f",b);
		    }
		    else printf("\ncau b khong co ket qua");
		    
		    int min=a[0];
		    for(i=1;i<n;i++){
		    	if (min>a[i]) min =a[i];
		    }
		    printf("\nso nho nhat cua mang la: %d\n",min);
   		
		   	d=0;
   		    for(i=0;i<n;i++){
			   for( j=1;j<=a[i];j++){
			   		if (a[i]%j==0) d=d+1;
			   }
			   if(d==2) printf("%d ",a[i]);
			   d=0;
		    }







		    
		    
}
		    

