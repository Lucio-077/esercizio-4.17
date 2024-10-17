#include <stdio.h>

int main(void) {
    int n, numero;
    int somma=0;
    printf("Quanti numeri devono essere inseriti: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i+1) {
        printf("Inserisci numero %d: ", i++);
        scanf("%d", &numero);
        if (numero < 0) {
            numero = numero * -1;
        }
        somma = somma+numero;

    }
    printf("\nla somma dei valori assoluti e':%d",somma );
}
