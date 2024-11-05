#include <stdio.h>

void solve(void)
{
    char soy[4], nombre[101];
    scanf("%s %s", soy, nombre);
    printf("Hola, %s.\n", nombre);
}

int main(void)
{
    unsigned int t;
    scanf("%u", &t);

    while (t--)
    {
        solve();
    }

    return 0;
}