#include <stdio.h>

int main() {
    float temp, sqrt;
    int i,n;
    printf("Give a number to calculate it's squar root: ");
    scanf("%d", &n);

    sqrt = n / 2;
    temp = 0;

    while(sqrt != temp) {
        temp = sqrt;
        sqrt=(n/temp + temp)/2;
    }

    printf("The square root of %d is: %f",n,sqrt);
}