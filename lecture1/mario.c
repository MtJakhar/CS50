#include <stdio.h>
// horizontal ? mark boxes
// int main(void) {
//   for(int i = 0; i < 4; i++) {
//     printf("?");
//   }
//   printf("\n");
// }

// 3 vertical boxes
// int main(void) {
//   for(int i = 0; i < 3; i++){
//     printf("#\n");
//   }
// }

// int main(void) {
//   for(int i = 0; i < 3; i++) {
//     for(int i = 0; i < 3; i++){
//       printf("#");
//     }
//     printf("\n");
//   }
// }

// const makes your variable unchangeable 

int main(void) {
  const int n = 3;
  //  you can also prompt user to chose n 
  // int n = get_int("Size: ");
  for(int i = 0; i < n; i++) {
    for(int i = 0; i < n; i++) {
      printf("#");
    }
    printf("\n");
  }
}