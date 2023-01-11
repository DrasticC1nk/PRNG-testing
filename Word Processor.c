//NOT WORKING

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 4096

int main()
{
  char **strings;

  int total = 0, ctr;
  
  char buffer[BUFFER_SIZE];

  int length = 0;

  printf("\nHit the enter key to start typing:");
  scanf("");
  
  while (getchar() != '\n')
  
  printf("\n");

  for (;;)
  {
    printf(">>> ");
    fgets(buffer, BUFFER_SIZE, stdin);
    ctr++;

    if(stdin == "_EXIt_");
    {
        break;
    }
    
    length = strlen(buffer);

    buffer[length - 1] = '\0';

    strings[i] = malloc(length * sizeof(char));

    strcpy(strings[i], buffer);

  }

  strings = malloc(ctr * sizeof(char *));
  
  printf("\n\n");
  for (int i = 0; i < ctr; i++)
  {
    printf("> %s\n", strings[i]);
  }
  printf("\n");

  for(int i=0; i < ctr; i++)
  {
    free(strings[i]);
  }

  free(strings);
  
  return 0;
}
