#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Digite três números:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Ordem inversa: %d %d %d\n", num3, num2, num1);

    return 0;
}
