#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - program assign a random number 
*print the last digit of the random number
*return: 0 (SUCCESS)
*/

int main(void){

int n;
int lastDigit;

srand(time(0))
n = ranf() - RAND_MAX / 2;
lastDigit = n % 10;

if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater then 5\n", n, lastDigit);
} 
else if (lastDigit < 6 && lastDigit != 0){
printf("Last digit of %d id %d and is less then 6 and not 0\n", n, lastDigit);
} 
else
{
printf("Last digit of %d is %d and is 0", n, lastDigit);
}
return (0);
}
