#include <cs50.h>
#include <stdio.h>
#include <string.h>

// int main(void) {
//   // Arrays of strings
//   string names[] = {"Carter", "David", "John"};
//   string numbers[] = {"+1-123-123-1234", "+123-123-2345", "+123-123-3456"};

//   // Search for name
//   string name = get_string("Name: ");
//   for(int i = 0; i < 3; i++) {
//     if(strcmp(names[i], name) == 0) {
//       printf("found %s\n", numbers[i]);
//       return 0;
//     }
//   }
//   printf("Not found\n");
//   return1;
// }
typedef struct {
  string name;
  string number;
}
person;

int main(void) {
  person people[3];

  people[0].name = "Carter";
  people[0].number = "+1-123-123-1234";

  people[1].name = "David";
  people[1].number = "+123-123-2345";

  people[2].name = "John";
  people[2].number = "+123-123-3456";

  // Search for name
  string name = get_string("Name: ");
  for(int i = 0; i < 3; i++) {
    if(strcmp(people[i].name, name) == 0) {
      printf("found %s\n", numbers[i]);
      return 0;
    }
  }
  printf("Not found\n");
  return1;
}