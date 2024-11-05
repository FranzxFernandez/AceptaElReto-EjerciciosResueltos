#include <stdio.h>

int userInput(void);
int computeDigits(int num);

int main(void)
{
    while (userInput());
    return 0;
}

int userInput(void)
{
    int num, sum = 0;
    (void)scanf("%d", &num);

    if (num < 0)
    {
        return 0;
    }

    sum = computeDigits(num);
    printf(" = %d\n", sum);

    return 1;
}

int computeDigits(int num)
{
    int n, digit;
    if ((num / 10) == 0)
    {
        n = num;
        printf("%d", n);
    }else
    {
        digit = num % 10;
        n = digit + computeDigits(num / 10);
        printf(" + %d", digit);
    }
    
    return n;
}