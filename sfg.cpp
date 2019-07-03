#include<stdio.h>
int  main()
{
int n;
	printf("Nhap 1 so nguyen: ");
	scanf("%d", &n);
	int d=0;
	for (int i=1;i<n;i++){
		if (n==i*i){
			printf("so %d la so chinh phuong",n);
			d=1;
			break;
		}
	}
	if (d==0) 	printf("\nso %d ko la so chinh phuong",n);
}
