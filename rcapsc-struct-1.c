#include <stdio.h>

int main() {
// Create a structure called myStructure
  struct myStructure {
    char myLetter;
    int myNum;
  };

  // Create a structure variable of myStructure called s1
  struct myStructure s1 = {'B', 13};

  // Assign values to members of s1
  // s1.myLetter = 'B';
  // Print values
  printf("My number: %c\n", s1.myLetter);

  // s1.myNum = 13;
  // Print values
  printf("My letter: %d\n", s1.myNum);

  return 0;
}
