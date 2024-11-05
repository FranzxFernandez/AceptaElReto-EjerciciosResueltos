#include <stdio.h>

void solve(void)
{
    int n;
    while ((void)scanf("%u", &n), n != 0)
    {
        if (n & 1)
        {
            printf("IZQUIERDA\n");
        }
        else
        {
            printf("DERECHA\n");
        }
    }
}

int main(void)
{
    solve();
    return 0;
}
