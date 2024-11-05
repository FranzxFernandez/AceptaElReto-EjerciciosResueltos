#include <stdio.h>

int main(void) {
    int casos;
    scanf("%d", &casos);

    while (casos--) {
        int anio;
        scanf("%d", &anio);

        int siglo = (anio / 100) + 1;

        if (anio % 100 == 0) {
            siglo--;
        }

        printf("%d\n", siglo);
    }

    return 0;
}