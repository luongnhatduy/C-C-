#include<stdio.h>
#include<string.h>

int main(){
 	char s1[100],s2[100],s3[100],s4[100],*s5;
 	int t;
 	printf("nhap vao s1:");
 	gets(s1);
 	printf("nhap vao s2:");
 	gets(s2);
 	
    strncpy(s3,s1,5);
    strncpy(s4,s2,4);
  
    strcat(s3,s4);
    puts(s3);
    
     s5=strstr(s3,"hoclai");
     if (s5 != NULL) 	printf("co xuat hien\n");
	 else printf(" khong xuat hien\n") ;
    
     t=strcmp(s1,s2);
     if (t<0) printf("chuoi s1 nho hon s2");
     else if (t==0) printf("chuoi s1 bang s2");
     else if (t>0) printf("chuoi s1 lon hon s2");
    
}
