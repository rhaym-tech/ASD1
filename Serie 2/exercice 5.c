#include <stdio.h>
int main() {
    int a, b, c, i;
    printf("enter the devisor value: ");
    scanf("%d", &a);
    printf("enter the denominator value: ");
    scanf("%d", &b);
i = a;
    while(i>b){
        i = i - b;
    
    }
    c = i;
    printf(" the quotient of %d/%d value is: %d", a, b, c);
} 