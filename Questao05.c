#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float num1 = 0;
    float num2 = 0;

    printf ("Digite o primeiro número: \n");
    scanf("%f", &num1);
    printf ("Digite o segundo número: \n");
    scanf("%f", &num2);

    // A) Soma dos números ------------
    float soma = 0;
    soma = num1 + num2;

    printf ("Valor da soma dos números é: %.2f\n", soma);
    //------------------------------------

    // B) Produto do primeiro pelo quadrado do segundo ------------
    float prod = 0;
    prod = num1 * (num2 * num2);

    printf ("O produto do primeiro pelo quadrado do segundo é: %2.f\n", prod);
    //------------------------------------

    // C) Quadrado do primeiro número ------------
    float quadrado = 0;
    quadrado = num1 * num1;

    printf ("O quadrado do primeiro número é: %2.f\n", quadrado);
    //------------------------------------

    // C) Raiz quadrada da soma dos quadrados ------------
    float raiz = 0;
    raiz = sqrt((num1 * num1)+(num2*num2));

    printf ("A raiz quadrada da soma dos quadrados é: %2.f\n", raiz);
    //------------------------------------

    // D) O seno da diferença do primeiro número pelo segundo ------------
    float seno = 0;
    seno = sin((num1 - num2));

    printf ("O seno da diferença do primeiro número pelo segundo é: %2.f\n", seno);
    //------------------------------------

    // E) O módulo do primeiro número ------------
    float modulo = 0;
    modulo = abs(num1 );

    printf ("O módulo do primeiro número é: %2.f\n", modulo);
    //------------------------------------

    return 0;
}
