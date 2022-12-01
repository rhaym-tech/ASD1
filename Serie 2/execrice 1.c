//Algorithme Lisible
#include <stdio.h>
int main() 
{ // Début
    int A, B, S, I; 
    scanf("%d" "%d", &A, &B); //Lire(A,B);
    S = A;
    I = 1;
    do { //Fair
        S = S + I;
        I = I + 1;
    } while(I<=B); //Tant que
    //Fin Tant Que
    printf("%d", S); //Ecrire(S);
} //fin