#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int chute;
    int contador = 2;

    srand(time(NULL));
    int teste = rand() % 11;

    while (contador >=0) {
    printf("Tente adivinhar qual o número, dê um chute: \n");
    scanf("%d", &chute);

        if (chute > teste){
            printf ("O número está abaixo do seu chute.\n");
            printf ("Tentativas restantes %d \n\n", contador);
            contador --;
        }else if (chute < teste){
            printf ("O número está acima do seu chute.\n");
            printf ("Tentativas restantes %d \n\n", contador);
            contador --;
        }else{
            printf ("Parabéns, você acertou! \n\n");
            contador = 0;
        }
    }
    return 0;
}
