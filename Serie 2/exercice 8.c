#include<stdio.h>
int main() {
    int i, n, p = 0;
    printf("Give a number: ");
    scanf("%d", &n);

    for(i = 1; i<=n; i++) {
        if(n%i==0) {
            p++;
        }
    }
    if(p == 2){
        printf("%d is a prime number", n);
    } else {
        printf("%d is not a prime number", n);
    }
}