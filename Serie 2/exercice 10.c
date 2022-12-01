#include <stdio.h>
int main() {
    int i, i2, f, a;
    float Sn;
    unsigned int n;
    Sn = 0;
    printf("this algorithm shows the sum of first n natural numbers, so please give n value (n ∈ ℕ): ");
    scanf("%u", &n);

    for(int i = 0; i <= n; i++) {

    //Algorithm to calculate n factorial and (-1)^n
    if(i%2 == 0) {
        a = 1;
    } else {
        a = -1;
    }
    f = 1;
     for (i2 = 1; i2 <= i; ++i2) {
        f *= i2;
    }
    //End of Algorithm
    Sn = Sn + (a/((float)(2*i + 1)*f));
    if(i == 0){
        printf("1");
    }
        if(i>=1){
        if(i%2 == 0) {
            printf(" + 1/%d", (2*i + 1)*f);
        } else {
            printf(" - 1/%d", (2*i + 1)*f);
        }
        }
    }
    printf(" = %f", Sn);
    printf("\nSo, Sn for n = %u value is:\n S%u = %f", n, n, Sn);
}