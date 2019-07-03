#include<stdio.h>
#include<math.h>

int main()
{
	int n,i;
    float x, s=1;
	printf("nhap vao x va n:");
	scanf("%f %d",&x,&n);
	for (i=1;i<=n;i++)
		{
			s=s+pow(-1,i)*i/pow(x,i);
		}
	printf("tong s la:%0.2f",s);
}
