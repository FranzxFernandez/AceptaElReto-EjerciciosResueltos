#include <stdio.h>
#include <stdlib.h>

void solve(void)
{
    int *array = NULL;

    const int length = 2;

    array = (int *)malloc((length) * sizeof(int));
    if (array == NULL)
    {
        // free(array); 
        return;
    }
    int i;
    for (i = 0; i < length; i++)    
    {
        (void)scanf("%d", &array[i]);
    }

    int isNavidad = 0;
    for (i = 0; i < length - 1; i++)
    {
        if (array[i] == 25 && array[i + 1] == 12)
        {
            isNavidad = 1;
        }
    }

    printf(isNavidad ? "SI\n" : "NO\n");

    free(array);
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
