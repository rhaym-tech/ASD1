#include<stdio.h>
int main()
{
    int i //loop index variable
    ,min //the minimum number variable
    ,n; //variable of the amont of given numbers

    printf("How many number you want to compare: ");
    scanf("%d",&n);
    printf("Enter %d numbers to find the minimum among this %d numbers:\n", n, n) ;
    int a[n]; //an array to put the given numbers in
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); //putting the numbers in the array
    }

    min = a[0]; //let's consider the first element in the array is the minimum number given

   for (i = 0; i < n; i++) {
      if (a[i] < min) {
         min = a[i];
      }
   }

    printf("The minimum number is %d", min);
}