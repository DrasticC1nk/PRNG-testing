#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define MAXVAL 10000 //C does not allocate memory by itself thus the code is not allocating 10000000 digits

int main()

{

   int k, seconds, i, x, y, r, t, l, u, c, c2, len, len2, ctr;
   char f, s[MAXVAL];

   printf("\nEnter the number of random number needed >>> ");
   scanf("%d", &x);

   printf("\nDo you want to seed your random numbers? (Y/N)");
   f = getch();

   do
   {
     if(toupper(f) != 'Y' && toupper(f) != 'N')
     {
         printf("\n\n%c is not a valid choice. Please choose between <Y/N>", toupper(f));
         f = getch();
     }
   }
   while(toupper(f) != 'Y' && toupper(f) != 'N');

   if(toupper(f) == 'Y')
   {
      printf("\n\nEnter your seed value (numeric only) >>> ");
      scanf("%s", s);
      len = strlen(s);

      for(ctr = 0; ctr < len; ctr++)
      {
         if(isdigit(s[ctr]))
         {
            c = 1;
         }
         else
         {
            c = 0;
            break;
         }
      }

      if(c == 0)
      {
         do
         {
            strcpy(s,"");
            printf("\nThe seed value is not numeric. Please enter a numeric value >>>");
            scanf("%s", s);
            len2 = strlen(s);

            for(ctr = 0; ctr < len2; ctr++)
            {
               if(isdigit(s[ctr]))
               {
                  c2 = 1;
               }
               else
               {
                  c2 = 0;
                  break;
               }
            }
         }
         while(c2 != 1);
      }
   
      k = atoi(s);

   }
   else
   {
      k = time(NULL);
   }

   srand(k);

   printf("\n\nDo you want a range for your random numbers? (Y/N)");
   f = getch();

   do
   {
     if(toupper(f) != 'Y' && toupper(f) != 'N')
     {
         printf("\n\n%c is not a valid choice. Please choose between <Y/N>", toupper(f));
         f = getch();
     }
   }
   while(toupper(f) != 'Y' && toupper(f) != 'N');

   //LOGIC
   
   if(toupper(f) == 'Y')
   {
    printf("\n\nEnter the lower range >>>  ");
    scanf("%d",&l);
    printf("\nEnter the upper range >>>  ");
    scanf("%d",&u); 

    printf("\n\nHere are your %d random numbers from %d to %d:-\n\n", x,l,u);
    for(i=0; i < x; i++)
    {
    printf("%d. %d\n",i+1, (rand() % (u - l + 1)) + l);
    }
    printf("\n");
   }
   if(toupper(f) == 'N')
   {
    printf("\n\nHere are your %d random numbers:-\n\n", x);
    for(i=0; i < x; i++)
    {
    printf("%d. %d\n",i+1, rand());
    }
    printf("\n");
   }

}
