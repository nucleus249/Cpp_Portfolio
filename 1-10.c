
#include <stdio.h>



main()
{
   int c;

   while ((c = getchar()) != EOF)
   {
      if (c=='\t')
        printf("\\t\n");
      else if (c=='\b')
         printf("\\b\n");
      else if (c=='\\')
         printf("\\\\\n");
      else
         putchar(c);
   }

}
