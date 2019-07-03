#include<stdio.h>
#include <math.h>
int main() {

            int n, i, a[100], max, min,tl=0,tc=0;

            printf("Nhap so phan tu cua day N = ");

            scanf("%d",&n);

            for(i=1; i<=n; i++) {

                        printf("a[%d]: ",i);

                        scanf("%d",&a[i]);

            }

            max=a[1];

            for(i=1; i<=n; i++) {

                        if(a[i]>max) {

                                    max=a[i];

                        }

            }

            printf("\nSo lon nhat trong day la: %d", max);

            min=a[1];

            for(i=1; i<=n; i++) {

                        if(a[i]<min) {

                                    min=a[i];}}
   printf("\nSo nho nhat trong day la: %d", min);
                        
for(i=1; i<=n; i++)
{
if(a[i]%2!=0)
{tl+=a[i];
}}
printf("\ntong le la:%d",tl);

 for(i=1; i<=n; i++) {
if (a[i]%2==0)
tc+=a[i];
}
printf("\ntong chan la:  %d",tc);


}
