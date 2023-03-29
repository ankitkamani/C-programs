#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   FILE *fptr1, *fptr2;
   char filename[50], ch;
 
   printf("Enter the file name to be read: ");
   scanf("%s", filename);
 
   fptr1 = fopen(filename, "r");
   if (fptr1 == NULL)
   {
      printf("File does not exists!");
      exit(0);
   }
 
   printf("Enter the file name where to be copied: ");
   scanf("%s", filename);
 
   fptr2 = fopen(filename, "w");
   if (fptr2 == NULL)
   {
      printf("Cannot open file %s \n", filename);
      exit(0);
   }
 
   ch = fgetc(fptr1);
   while (ch != EOF)
   {
      fputc(ch, fptr2);
      ch = fgetc(fptr1);
   }
 
   printf("\nContent is copied to %s successfully.", filename);
 
   fclose(fptr1);
   fclose(fptr2);
 
   return 0;
}