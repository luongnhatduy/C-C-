#include<stdio.h>

int main(){
	int a[1000];
	int d=0;
	int k=1;
	int n=1,i,j;
	for ( i=3;i<100;i++)
{
		for ( j=2;j<i;j++){
			if (i%j==0) d=d+1;
		}
		if (d==0){
			a[k]=i;
			k++;
			n++;
		}
		d=0;
	}
	for (k=1;k<=n;k++) {
		if (a[k]==a[k+1]-2){
			printf("%d %d\n",a[k],a[k+1]);
		}
	}
	
}
