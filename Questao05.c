#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float num1 = 0;
    float num2 = 0;

    printf ("Digite o primeiro n�mero: \n");
    scanf("%f", &num1);
    printf ("Digite o segundo n�mero: \n");
    scanf("%f", &num2);

    // A) Soma dos n�meros ------------
    float soma = 0;
    soma = num1 + num2;

    printf ("Valor da soma dos n�meros �: %.2f\n", soma);
    //------------------------------------

    // B) Produto do primeiro pelo quadrado do segundo ------------
    float prod = 0;
    prod = num1 * (num2 * num2);

    printf ("O produto do primeiro pelo quadrado do segundo �: %2.f\n", prod);
    //------------------------------------

    // C) Quadrado do primeiro n�mero ------------
    float quadrado = 0;
    quadrado = num1 * num1;

    printf ("O quadrado do primeiro n�mero �: %2.f\n", quadrado);
    //------------------------------------

    // C) Raiz quadrada da soma dos quadrados ------------
    float raiz = 0;
    raiz = sqrt((num1 * num1)+(num2*num2));

    printf ("A raiz quadrada da soma dos quadrados �: %2.f\n", raiz);
    //------------------------------------

    // D) O seno da diferen�a do primeiro n�mero pelo segundo ------------
    float seno = 0;
    seno = sin((num1 - num2));

    printf ("O seno da diferen�a do primeiro n�mero pelo segundo �: %2.f\n", seno);
    //------------------------------------

    // E) O m�dulo do primeiro n�mero ------------
    float modulo = 0;
    modulo = abs(num1 );

    printf ("O m�dulo do primeiro n�mero �: %2.f\n", modulo);
    //------------------------------------

    return 0;
}
