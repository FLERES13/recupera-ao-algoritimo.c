#include <stdio.h>

int main() {
    char dia_inicio[4], dia_termino[4];
    int dia1, dia2, hora1, minuto1, segundo1, hora2, minuto2, segundo2;
    int duracao_dias, duracao_horas, duracao_minutos, duracao_segundos;

    scanf("%s %d", dia_inicio, &dia1);
    scanf("%d : %d : %d", &hora1, &minuto1, &segundo1);
    scanf("%s %d", dia_termino, &dia2);
    scanf("%d : %d : %d", &hora2, &minuto2, &segundo2);

    duracao_segundos = (dia2 * 86400 + hora2 * 3600 + minuto2 * 60 + segundo2);
                       (dia1 * 86400 + hora1 * 3600 + minuto1 * 60 + segundo1);

    duracao_dias = duracao_segundos / 86400;
    duracao_segundos %= 86400;
    duracao_horas = duracao_segundos / 3600;
    duracao_segundos %= 3600;
    duracao_minutos = duracao_segundos / 60;
    duracao_segundos %= 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", 
           duracao_dias, duracao_horas, duracao_minutos, duracao_segundos);

    return 0;
}