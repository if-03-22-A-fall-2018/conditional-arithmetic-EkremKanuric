#include "conditional-arithmetic.h"
int main(int argc, char const *argv[]) {
  int x = GetOperation();
  return 0;
}

int GetOperation(){
    int operation_index;
    int numb;
    printf("Add(1)/Multiply(2)?\n");
    scanf("%d", &operation_index);
    printf("Give me a number from 1 to 100\n");
    scanf("%d", &numb);
    if (operation_index != 1 && operation_index != 2 || numb > 100 ||numb <1) {
      printf("Invalid input! Please try again\n");
      GetOperation();
    }
    return numb;
}
