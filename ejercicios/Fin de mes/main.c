#include <stdio.h>

void solve(void)
{
    int saldo_actual, estimacion;
    (void)scanf("%d %d", &saldo_actual, &estimacion);   

    if ((saldo_actual + estimacion) >= 0)
    {
        printf("SI\n");
    }else
    {
        printf("NO\n");
    }
}

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
