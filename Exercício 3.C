#include <stdio.h>

int main() {
    float preco_acao1 = 24.13, preco_acao2 = 11.00, preco_acao3 = 38.65;
    float dividendo_acao1 = 17.00, dividendo_acao2 = 35.00, dividendo_acao3 = 25.00;
    float investimento_total = 1000.00;
  
    int qtd_acao1, qtd_acao2, qtd_acao3;
    
    printf("Digite a quantidade de Ação 1 que deseja comprar: ");
    scanf("%d", &qtd_acao1);
    
    printf("Digite a quantidade de Ação 2 que deseja comprar: ");
    scanf("%d", &qtd_acao2);
    
    printf("Digite a quantidade de Ação 3 que deseja comprar: ");
    scanf("%d", &qtd_acao3);
    
    float valor_investido_acao1 = qtd_acao1 * preco_acao1;
    float valor_investido_acao2 = qtd_acao2 * preco_acao2;
    float valor_investido_acao3 = qtd_acao3 * preco_acao3;
    
    float valor_investido_total = valor_investido_acao1 + valor_investido_acao2 + valor_investido_acao3;
    
    if (valor_investido_total > investimento_total) {
        printf("O valor total investido (R$ %.2f) excede o limite de R$ 1.000,00.\n", valor_investido_total);
        return 1;
    }

    float dy_acao1 = (dividendo_acao1 / preco_acao1) * 100;
    float dy_acao2 = (dividendo_acao2 / preco_acao2) * 100;
    float dy_acao3 = (dividendo_acao3 / preco_acao3) * 100;

    printf("\nResultados:\n");
    printf("Ação 1: Comprou %d ações a R$ %.2f cada, valor investido: R$ %.2f\n", qtd_acao1, preco_acao1, valor_investido_acao1);
    printf("Dividend Yield da Ação 1: %.2f%%\n", dy_acao1);

    printf("Ação 2: Comprou %d ações a R$ %.2f cada, valor investido: R$ %.2f\n", qtd_acao2, preco_acao2, valor_investido_acao2);
    printf("Dividend Yield da Ação 2: %.2f%%\n", dy_acao2);

    printf("Ação 3: Comprou %d ações a R$ %.2f cada, valor investido: R$ %.2f\n", qtd_acao3, preco_acao3, valor_investido_acao3);
    printf("Dividend Yield da Ação 3: %.2f%%\n", dy_acao3);

    printf("\nValor total investido: R$ %.2f\n", valor_investido_total);

    return 0;
}
