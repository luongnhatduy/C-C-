#include<stdio.h>

int main(){
	int a[1000];
	int d=0;
	int k=0;
	int n=0,x;
	do
	{printf("nhap x tu ban phim\n");
	scanf("%d",&x);}
	while (x<0);
	for (int i=2;i<=x;i++)
{
		for (int j=2;j<i;j++)
		
			if (i%j==0) d=d+1;
		
		if (d==0){
			a[k]=i;
			k++;
			n++;
		}
	d=0;
	}
	for (k=0;k<n;k++) {
		
			printf("%d\n",a[k]);
		}
	
	
}
