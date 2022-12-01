#include <stdio.h>
int main(){
    long int n, m = 0;

    printf("Give a number: ");
    scanf("%ld", &n);

    while(n>0) {
       m *= 10;
       m += n%10;
       n /= 10;
    }
    printf("the reverse of the given number is: %ld", m);
}