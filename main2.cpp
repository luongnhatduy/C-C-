#include<graphics.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

void ve4diem(int xc,int yc, int x, int y,int color)
{
	putpixel(xc-x,yc-y,color);
	putpixel(xc+x,yc+y,color);
	putpixel(xc-x,yc+y,color);
	putpixel(xc+x,yc-y,color);
	delay(15);
}
void elipse(int x_center, int y_center, int a, int b,int color)
{
	float a2,b2,p;
	int x,y;
	a2=pow(a,2);
	b2=pow(b,2);
		x=0;
		y=b;
		p= 2*float(b2/a2) - (2*b) +1;
	// ve nhanh tu tren xuong 
	while((float(b2/a2))*x<=y)
	{
		ve4diem(x_center, y_center, x , y, color);
		{
			
			if(p<0)
			{
				p=p+2*((float)b2/a2)*(2*x+3);
			}
			else// ((p>=0))
			{
				p=p-4*y+2*(float(b2/a2))*(2*x+3);
				y--;
			}
			x++;
		}
    }
    // ve nhanh tu duoi len
   	 x=a;
   	 y=0;
   	 p=2*float(b2/a2)-(2*a)+1;
   	  while(((float)a2/b2)*y<=x)
    {
        ve4diem(x_center,y_center,x,y ,color);
        if(p<0)
        {
        
             p=p +2*((float)a2/b2)*(2*y+3);
        }
        else
        {
            p=p- 4*x + 2*((float)a2/b2)*(2*y+3);
            x=x-1;
        }
        y=y+1;
    }
      
}
void tomau(int x, int y ,int tomau,int color )
{   
    	int x1,x2;
	do
	{ 
        x1=x;
        x2=x;
		while(getpixel(x1-1,y)!=color)
			x1--;
		while(getpixel(x2+1,y)!=color)
			x2++;
		for(int i=x1;i<=x2;i++)
			putpixel(i,y,tomau);
		while(getpixel(x1,y+1)==color)
			x1++;
		if(x1<=x2)
		{
			x = x1;
			y=y+1;
		}
		delay(25);
	}
	while(x1<=x2);
		do
	{ 
        x1=x;
        x2=x;
		while(getpixel(x1-1,y)!=color)
			x1--;
		while(getpixel(x2+1,y)!=color)
			x2++;
		for(int i=x1;i<=x2;i++)
			putpixel(i,y,tomau);
		while(getpixel(x1,y-1)==color)
			x1++;
		if(x1<=x2)
		{
			x = x1;
			y=y-1;
		}	
	}
	while(x1<=x2);
}
void nhap(int &x,int &y,int &color,int &mauto)
{
	cout<<" nhap toa do hinh elip la \n";
	cout<<"hoanh do la : x=\n";
	cin >>x;
	cout<<"tung do la :y= \n";
	cin >>y;
	cout<<"nhap gia tri mau sac la ";
	cin>> color;
	cout<<"nhap gia tri mau to ";
	cin >>mauto;
}
main()	
{
	int x,y;
	int color;
    int mauto;
    nhap(x,y,color,mauto);
	initwindow(640,480);
	elipse(x,y,300,150,color );
	tomau(x,y,mauto,color );
	getch();
}
