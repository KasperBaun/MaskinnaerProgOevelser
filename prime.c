#include <stdio.h>

void isPrime(int n){
    int count,c,i=3;
      for (count = 2; count <= n;)
  {
    for (c = 2; c <= i - 1; c++)
    {
      if (i%c == 0)
        break;
    }
    if (c == i)
    {
      printf("%d\n", i);
      count++;
    }
    i++;
  }
}

int main(void)
{
    int range;

    printf("#### Primenumber calculator ####\n");
    printf("Please enter amount of prime numbers you wish to see starting from 2.\n E.g. '150' for the first 150 primenumbers.\n");
    scanf("%d",&range);
    printf("First %d prime numbers are:\n",range);
    printf("2\n");
    isPrime(range);
/*
   for (int i=2; i <= range; i++)
   {
       isPrime(i);
       if(i==2){printf("2\n");}
   }
*/
}

    
  

    


    