#include <stdio.h>

long int compute_factorial(long int n);
void solve(void);

int main(void)
{
    unsigned int t;
    (void)scanf("%u", &t);

    while (t--)
    {
        solve();
    }
    return 0;
}

void solve(void)
{
    long int zahl, result;
    (void)scanf("%ld", &zahl);

    result = compute_factorial(zahl);
    printf("%ld\n", result % 10);
}

long int compute_factorial(long int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        if (n >= 5) // A partir de n >= 5 el ultimo digito siempre es 0. Con esta linea evito el TLE
        {
            return 0;
        }
        return (n * compute_factorial(n - 1));
    }
}
