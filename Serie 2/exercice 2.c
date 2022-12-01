#include<stdio.h>
int main()
{
    int i,n, sum, num;
    sum = 0;
    printf("How many number you want to sum: ");
    scanf("%d",&n);
    printf("Enter %d numbers calculate its sum:\n", n) ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
    }

   for (i = 0; i < n; i++) {
      sum = sum + num;
   }

    printf("The minimum number is %d", sum);
}