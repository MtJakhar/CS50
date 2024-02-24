#include <stdio.h>
// #include <cs50.h>
// cs50.h is in cs50 cloud vscode

// int main(void) {
//   printf("hello, world\n");
// }

int main(void) {
  string answer = get_string("what's your name? ");
  printf("hello, %s\n", answer);
}
// The get_string function is used to get a string from the user. Then, the variable answer is passed to the printf function. %s tells the printf function to prepare itself to receive a string.

