#include "conditional-arithmetic.h"
int main(int argc, char const *argv[]) {
  int x = GetOperation();
  GetNumbers(x);
  return 0;
}

int GetOperation(){
    int operation_index;
    int numb;
    do {
      printf("Add(1)/Multiply(2): ");
      scanf("%d", &operation_index);
    } while(operation_index <  1 || operation_index  > 2);
    do {
      printf("Number from 1-100: ");
      scanf("%d", &numb);
    } while(numb > 100 || numb < 1);
    add1_multyply2 = operation_index;
    return numb;
}
void GetNumbers(int x){
  x +=1;
  int product_or_sum = 1;


  for (size_t i = 1; i < x && i != -1; i++) {
    if (add1_multyply2 == 1)
    {
      if (Check(i) == 1)
      {
        product_or_sum += i;
      }
    }
    else
    {
      if (Check(i) == 1)
      {
        product_or_sum *= i;
      }
    }
  }


  if (add1_multyply2 == 1) {
    product_or_sum--;
  }
  printf("The result is %d\n", product_or_sum);
}
int Check(int x )
{
  if (x % 3 == 0 || x % 5 == 0) {
    return 1;
  }
  return 0;
}
