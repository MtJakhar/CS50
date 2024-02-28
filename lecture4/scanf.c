#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *s;
  printf("s: ");
  scanf("%s", s);
  printf("s: %s\n", s);
}

// get_string implementation

int main(void)
{
    char *s = malloc(4);
    if (s == NULL)
    {
        return 1;
    }
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
    free(s);
    return 0;
}

// or 
int main(void)
{
    char s[4];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}

// note that this only takes 4 chars, user input maybe more than 4