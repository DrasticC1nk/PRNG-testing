#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int main()

{

   int seconds, i, x, y, r, t, l, u;
   int f;

   srand(time(NULL));

   printf("\nEnter the number of random number needed >>> ");
   scanf("%d", &x);
   
   printf("\nDo you want a range for your random numbers? (Y/N)");
   f = getch();

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
   else if(toupper(f) == 'N')
   {
    printf("\n\nHere are your %d random numbers:-\n\n", x);
    for(i=0; i < x; i++)
    {
    printf("%d. %d\n",i+1, rand());
    }
    printf("\n");
   }
   else
   {
    printf("\n\nNot a valid choice.\n\n");
   }

}