#include <stdio.h>

void solve(void)
{
    printf("Hola mundo.\n");
}

int main(void)
{
    unsigned int t;
    scanf("%u", &t);
    if (t > 5)
    {
        return;
    }

    while (t--)
    {
        solve();
    }

    return 0;
}