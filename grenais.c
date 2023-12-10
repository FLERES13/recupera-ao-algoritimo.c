#include <stdio.h>

int main() {
    int gols_inter, gols_gremio, repetir, grenais = 0, vitorias_inter = 0, vitorias_gremio = 0, empates = 0;

    do {
        scanf("%d %d", &gols_inter, &gols_gremio);
        grenais++;

        if (gols_inter > gols_gremio) {
            vitorias_inter++;
        } else if (gols_gremio > gols_inter) {
            vitorias_gremio++;
        } else {
            empates++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &repetir);

    } while (repetir == 1);

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vitorias_inter);
    printf("Gremio:%d\n", vitorias_gremio);
    printf("Empates:%d\n", empates);

    if (vitorias_inter > vitorias_gremio) {
        printf("Inter venceu mais\n");
    } else if (vitorias_gremio > vitorias_inter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}