#include <stdio.h>
int main(){
    int i, a, b, PGCD;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);
    printf("This code will calculate the greatest common devisor of %d and %d \n", a, b);

    for(i = 1; i<= a && i<= b; i++){
        if(a%i == 0 && b%i == 0)
        PGCD = i;
    }

    printf("The gratest common devisor value: PGCD(%d:%d) = %d", a, b, PGCD);

}