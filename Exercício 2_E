#include <stdio.h>

int main() {
    float largura, altura, area, litros_necessarios;
    int latas;

    printf("Digite a largura da parede (em metros): ");
    scanf("%f", &largura);
    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &altura);

    area = largura * altura;
    litros_necessarios = area * 0.3;
    latas = (int)(litros_necessarios / 2) + (litros_necessarios > (latas * 2) ? 1 : 0);

    printf("Você precisará de %d latas de tinta.\n", latas);

    return 0;
}
