#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
   char *strptr[3];
   char buf[80];
   int n;
   
   for(n = 0; n < 3;n++)
   {
      printf("strptr[%d] == ", n);
      scanf("%s", buf);

      strptr[n] = (char *)malloc(sizeof(char) * 80);
      strcpy(strptr[n], buf);
   }

   for(n = 2; n >= 0; n--)
      printf("strptr[%d] == %s\n", n, strptr[n]);
}