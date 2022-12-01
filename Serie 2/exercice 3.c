#include <stdio.h>
int main() {
    int i, sum;
    unsigned int N;
    sum = 0;
    printf("this algorithm shows the sum of first N natural numbers, so please give N value (N ∈ ℕ): ");
    scanf("%u", &N);
    printf("0");
    for(int i = 1; i <= N; i++) {
        sum = sum + i;
        printf(" + %d", i);
    }
    printf(" = %d", sum);
    printf("\nSo, the sum if the first %u numbers is: %d", N, sum);
}