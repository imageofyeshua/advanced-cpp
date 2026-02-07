#include <stdio.h>
#include <stdlib.h>

void main()
{
  char *shell = getenv("SHELL");
  printf("The current shell is %s.\n", shell);
}
