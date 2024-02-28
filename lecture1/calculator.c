// #include <cs50.h>
#include <stdio.h>
// int main(void) {
//   //Prompt user for x
//   int x = get_int("x: ");

//   // Prompt user for y
//   int y = get_int("y: ");

//   // Perform addition
//   printf("%i\n", x + y);
// }

int add(int a, int b);

// int main(void) {
//   //Prompt user for x
//   int x = get_int("x: ");

//   // Prompt user for y
//   int y = get_int("y: ");

//   // Perform addition
//   int z = add(x, y);
//   printf("%i\n", z);
// }

// int add(int a, int b) {
//   // this is a pure function
//   // int c = a + b;
//   // return value
//   // return c;
//   return a + b;
// }

int main(void) {
  // long is long integer which takes more mem that int
  // Prompt user for x
  long x = get_long("x: ");

  // Prompt user for y
  long y = get_long("y: ");

  //perform addition
  // li is format for long integer
  printf("%li\n", x + y);
}