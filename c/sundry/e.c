#include <stdio.h>
 
int main()
{
   FILE *fp = NULL;
 
   fp = fopen("test.txt", "w+");
   fprintf(fp, "test\n");
   fclose(fp);

   char buff[255];
 
   fp = fopen("test.txt", "r");
 
   fgets(buff, 255, (FILE*)fp);
   printf("%s\n", buff );
   fclose(fp);
}