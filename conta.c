#include <stdio.h>

int main() {
    int casos, n;

    scanf("%d", &casos);

    while (casos--) {
        scanf("%d", &n);

        if (n % 2 == 0) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    }

    return 0;
}