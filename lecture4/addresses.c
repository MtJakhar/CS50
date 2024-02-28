#include <stdio.h>

// int main(void) {
//   int n = 50;
//   printf("%i\n", n);
// }

// with pointer

// int main(void) {
//   int n = 50;

//   // this creates pointer which stores address of pointer 
//   int *p = &n;
//   printf("%p\n", p);
// }

// int main(void) {
//   string s = "HI!";
//   printf("%p\n", s);
//   printf("%p\n", &s[0]);
//   printf("%p\n", &s[1]);
//   printf("%p\n", &s[2]);
//   printf("%p\n", &s[3]);
// }

// int main(void) {
//   char *s = "HI!";
//   printf("%s\n", s);
// }

// int main(void)
// {
//     char *s = "HI!";
//     printf("%c\n", s[0]);
//     printf("%c\n", s[1]);
//     printf("%c\n", s[2]);
// }

// or
// pointer arithmetic
int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
}
