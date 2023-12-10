#include <stdio.h>

int main() {
    int quantidade_produtos, codigo_produto, quantidade_comprada;
    double valor_total = 0;

    scanf("%d", &quantidade_produtos);

    while (quantidade_produtos--) {
        scanf("%d %d", &codigo_produto, &quantidade_comprada);

        switch (codigo_produto) {
            case 1001:
                valor_total += quantidade_comprada * 1.50;
                break;
            case 1002:
                valor_total += quantidade_comprada * 2.50;
                break;
            case 1003:
                valor_total += quantidade_comprada * 3.50;
                break;
            case 1004:
                valor_total += quantidade_comprada * 4.50;
                break;
            case 1005:
                valor_total += quantidade_comprada * 5.50;
                break;
            default:
                printf("Código de produto inválido.\n");
                return 1;
        }
    }
    printf("%.2f\n", valor_total);

    return 0;
}