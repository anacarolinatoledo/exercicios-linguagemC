#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    char vetor [10];
    int vetor_inteiro[10];
    int i;
    int numeroVetor = 0;
    int soma = 0;

    setlocale(LC_ALL, "");

        printf("Digite até 10 números inteiros: ");
        scanf(" %s",&vetor);

    numeroVetor = strlen(vetor);

    for(i=0; i<numeroVetor; i++){
        vetor_inteiro[i] = vetor[i] - '0';
        soma = vetor_inteiro[i] + soma;
        printf("%c,", vetor[i]);

    }

    printf("\n O valor da média entre eles é: %d", soma / numeroVetor);
}
