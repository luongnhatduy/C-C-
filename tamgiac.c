#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	do
	{
		printf(" nhap vao 3 canh cua tam giac: ");
	scanf(" %f %f %f", &a,&b,&c);
	}
	while((a<0)||(b<0)||(c<0));
{	while((a+b<=c)&&(a+c<=b)&&(b+c<=a));
if ((a*a + b*b ==c*c)||(a*a+c*c==b*b)||(a*a==b*b+c*c))

{printf ("do la tam giac vuong");
}	
	else if ((a==b)||(a==c)||(b==c))
{	printf ("do la tam giac can");
}
	else if((a==b)&&(b==c)&&(a==c))
	{printf ("do la tam giac deu");
	}
	else if (((a*a + b*b ==c*c)||(a*a+c*c==b*b)||(a*a==b*b+c*c))&&((a==b)||(a==c)||(b==c)))
{
printf ("do la tam giac vuong can");
}
else {
printf("do la tam giac thuong");
}
	}
	}
