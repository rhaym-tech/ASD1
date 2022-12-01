#include <stdio.h>
int main() {

    int i, num;
    for (int i = 0; i >= 0; i++){
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num%2 == 0) 
        printf("The given number is divisible by 2 \n"); 
        else
        printf("The given number isn't divisible by 2 \n");
    }

    return 0;
}