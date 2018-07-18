
#include <stdio.h>

main()
{
   int c, length, wc, i;
   wc = 1;
   length = 0;

   
   while ((c = getchar()) != EOF){
      
      
      if (c != ' ' && c != '\t')
         ++length;
      else{

         printf("\n");
         printf("%d; ", wc);

         for (i=0; i<length; i++)
            printf("-");

         length = 0;
         ++wc;
      }

   }
}
