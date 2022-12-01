#include <stdio.h>
int main() {
    int num, pow, n, i;
    n = 1;
    printf("Give the number that you want to add a power to: ");
    scanf("%d", &num);
    printf("Give the power: ");
    scanf("%d", &pow);
  i = pow;
  while(i>0){
    n = n * num;
    --i;
  }
  printf("%d ^ %d = %d", num, pow, n);
}