#include <stdio.h>
#include<math.h>
int i,j,n;
int main()
{do{

printf("nhap vao so tu nhien n:");
scanf("%d",&n);}
while (n>10);
{

for (i=3;i<=n;i++)
{

j=sqrt(i);
if (j*j==i)
{printf ("cac so cp la: %d\n",i);
}
}}}

