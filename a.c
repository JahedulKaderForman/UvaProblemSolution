#include <stdio.h>
#include <ctype.h>

int main()
{
   int i = 0;
   char c[100];
   gets(c);

   while(c[i]!='\0')
   {
      putchar (toupper(c[i]));
      i++;
   }

   return(0);
}
