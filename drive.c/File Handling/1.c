/*1.WAP to read content from one file & write it to another file.*/

#include<stdio.h>

void main(){

FILE *fp;

char m[50] = "Demo of write"; 
fp = fopen("demo.txt","w");

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