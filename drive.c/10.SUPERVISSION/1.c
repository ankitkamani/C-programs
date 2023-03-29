/*1. C program to create a file and write data into file.*/

#include<stdio.h>

void main(){

FILE *fp;

char m[50] = "Demo of write"; 
fp = fopen("1.txt","w");

if (fp==NULL)
{
    printf("file not found...");
}
else{
    printf("file is created/found...");
}

fputs(m,fp);

fclose(fp);

}