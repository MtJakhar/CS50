#include <stdio.h>
// manuel implementation
// int main(void) {
//   printf("meow\n");
//   printf("meow\n");
//   printf("meow\n");
// }


// increment
// int main (void){
//   int i = 3;
//   while (i > 0) {
//     printf("meow\n");
//     i--;
//   }
// }

// decrement
// int main(void) {
//   int i = 1;
//   while (i <= 3) {
//     printf("meow\n");
//     i++;
//   }
// }

// best to start from zero 
// int main(void) {
//   int i = 0;
//   while (i < 3) {
//     printf("meow\n");
//     i++;
//   }
// }

// for loop
// int main(void) {
//   for(int i = 0; i < 3; i++) {
//     printf("meow\n");
//   }
// }

// Notice how the meow function is called with the meow() instruction. This is possible because the meow function is defined at the bottom of the code and the prototype of the function is provided at the top of the code as void meow(void).
// void meow(void);

// int main(void) {
//   for (int i = 0; i < 3; i++) {
//     meow();
//   }
// }

// void meow(void) {
//   printf("meow\n");
// }

// meow with input

void meow(int n);

int main(void) {
  meow(3);
}
// meow some number of times
void meow(int n ) {
  for (int i = 0; i < n; i++){
    printf("meow\n");
  }
}