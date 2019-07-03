 

for(i=1;i<=m;i++)
for(j=1;j<=n;j++)

{printf("%d\t",a[i][j]);
if (j==n)
printf("\n");
}
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
{if(a[i][j]%2==0)
tc=tc+a[i][j];
}
printf("tong chan la");
}
   // sap xep//
           int l;
 for(int i=1;i<=x;i++)
        for(int j=1;j<=y;j++)
            for(int k=1;k<=x;k++)
                for(int l=1;l<=y;l++)
                    if(a[1][j]<a[1][l])
                            {
                            	int temp=a[1][j];
                            	a[1][j]=a[1][l];
                            	a[1][l]=temp;
							}
                            
                            
 for(i=1; i<=x; i++) 
			for (j=1; j<=y;j++)
			{printf ("%d\t", a[i][j]);
			if (j==y)
			printf ("\n");}

}

