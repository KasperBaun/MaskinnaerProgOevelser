#include <stdio.h>
int IsDivisibleBy(int dividend, int divisor);
int main(void)
{
int f; // The number of integer factors of a number
for (int i = 2; i < 1000; i++) {
f = 0;
for (int j = 2; j < i; j++) {
if (IsDivisibleBy(i, j))
f++;
}
printf("The number %d has %d factors\n", i, f);
}
}
int IsDivisibleBy(int dividend, int divisor)
{
if (dividend % divisor == 0)
return 1;
else
return 0;
}