#include <stdio.h>
// #include <cs50.h>
// cs50.h is in cs50 cloud vscode

int main(void) {
  int x = get_int("What's x? ");
  int y = get_int("What's y? ");
  if (x < y) {
    printf("x is less that y\n");
  }
}