#include<stdio.h>
int main()
{
	//Bai 1: 
	int n,i;
	printf(" Nhap n: "); scanf(" %d", &n);
	int n1=0,n2=1,n3;
	for( i=0;i<n;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
	printf(" So Fabonacci thu %d cua day la : %d",n,n3);
	
}
