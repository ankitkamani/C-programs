/*2. C program to read a file and display its contents.*/

#include <stdio.h>
#include <string.h>
 
void main()
{
    FILE* ptr;
    char ch;
 
    ptr = fopen("1.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
     while (ch != EOF){
        ch = fgetc(ptr);
        printf("%c", ch);
    }
 
    fclose(ptr);

}