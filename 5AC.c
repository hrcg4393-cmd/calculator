#include <stdio.h>

    int main(void) {
        int a;
        int b;
        char op;

        printf("---CALCULADORA EN C---\n");
        printf("\n");
        printf("\n");

        printf("Primer Digito: \n");
        scanf("%d", &a);
        printf("Selecione sus Operadores + - *:\n"); 
        scanf(" %c", &op);
        printf("Segundo Digito\n");
        scanf("%d", &b);

        if (op == '+'){
        printf("%d + %d = %d\n", a, b, a + b );
        }
        else if (op == '-') {
            printf("%d - %d = %d\n", a, b, a - b);
        }
        else if (op == '*') {
        printf("%d x %d = %d\n", a, b, a * b );
        }
        else {
            printf("Operador invalido\n");
        }
    }