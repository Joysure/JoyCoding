#include <stdio.h>
#include <math.h>

bool primetest(int a)
{
    int b = sqrt(a); // only need to test up to the square root of the input

    for (int i = 2; i <= b; i++)
    {
        if (a % i == 0)
           return false;
   }

   // if the loop completed, a is prime
   return true;
}

int main()
{
    int input = 0;
    printf("please input the number\n");
    scanf("%d",&input);
    if(primetest(input))
    {
        printf("this is a prime number\n");
    }
    else
    {
        printf("this is not a prime number");
    }
    
    return 0;
}