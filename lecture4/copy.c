#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{  
  // Get a string
  char *s = get_string("s: ");

  // Allocate memory for another string
  char *t = malloc(strlen(s) + 1);

  // Copy string into memory, including '\0'
  for (int i = 0, n = strlen(s); i <= n; i++)
  {
      t[i] = s[i];
  }

  // Capitalize copy
  t[0] = toupper(t[0]);

  // Print strings
  printf("s: %s\n", s);
  printf("t: %s\n", t);
}

// c language has a function to copy strings called str copy.

int main(void) {
  // get a string
  char *s= get_string("s: ");
  if (s == NULL) {
    return 1;
  }

  char *t = malloc(strlen(s) + 1);
  if(t == NULL) {
    return 1;
  }

  strcpy(t,s);

  t[0] = toupper(t[0]);

  printf("s: %s\n", s);
  printf("t: %s\n", t);

  free(t);
  return 0;
}