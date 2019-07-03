#include<stdio.h>

int main(){
	int a[1000];
	int d=0;
	int k=1;
	int n=1;
	int x,i,j;
	do
	{printf("nhap x tu ban phim\n");
	scanf("%d",&x);}
	while (x<0);
	for (i=2;i<=x;i++)
{
		for ( j=1;j<i;j++)
					if (i%j==0)
			 d=d+j;
		
		if (d==i){
			a[k]=d;
			k++;
			n++;
		}
d=0;
	}
	for (k=1;k<=n;k++) {
		
			printf("%d\n",a[k]);
		}
	
}
