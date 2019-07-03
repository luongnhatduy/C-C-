#include<stdio.h>
#include<conio.h>
#include<math.h>
int  main()
{
int x;
	printf("Nhap 1 so nguyen: ");
	scanf("%d", &x);
	if (x > 3)
	{
		int a = sqrt(x);
		if (a*a == x)
			printf("%d la so chinh phuong", x);
		else
		{
			printf("%d khong la so chinh phuong", x);
		}
	}
	else
		printf("%d khong la so chinh phuong",x);
	getch();
}
