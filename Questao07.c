#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    //Declaração de variáveis
    int escolha;
    //1° caso
    int  hora;
    //2º caso
    float nota01 = 0;
    float nota02 = 0;
    float media = 0;
    float notaExame = 0;
    float estadoExame = 0;
    //3º caso
    int chute;
    int contador = 2;
    //4º caso
    int contador_4;
    //5º caso
    float num1 = 0;
    float num2 = 0;
    //6º caso
    char vetor [10];
    int vetor_inteiro[10];
    int i;
    int numeroVetor = 0;
    int soma = 0;
    float media_vet = 0;
    //Caso 0
    int contador_0;

    setlocale(LC_ALL, "");

   do{

    printf("\nMenu\n0-Fim\n1-Relógio Falado\n2-Nota do aluno\n3-Adivinhar número aleatório\n4-Laço negativo\n5-Calcular para dois números\n6-Converter string para array de inteiro\nDigite o número da operação que deseja realizar: \n");
    scanf ("%i", &escolha);

    switch (escolha) {

        case 0:
            printf("Opção: %d", 0);

            for (contador_0 = 5; contador_0 >= 1; contador_0--) {
            sleep(1);
            printf("\nSaindo em %d\n", contador_0 );
            }
            printf("FIM!!");
            break;

        case 1:

            printf("Opção: %d", 1);

            printf("\nEscreva o valor da hora atual como inteiro: ");
            scanf("%d", &hora);

            printf("Nome da aluna: Ana Carolina Tolêdo Lôbo Maia\n");

            if(hora >= 0 && hora < 12){
                printf("\nBom dia");
            }else if(hora>=12 && hora<18){
                printf("\nBoa tarde");
            }else if(hora >= 18 && hora <=23){
                printf("\nBoa noite");
            }else{
                printf("\nHorário inválido");
            }
            break;

        case 2:
            printf("Opção: %d", 2);

            printf("\nDigite sua primeira nota: ");
            scanf("%f", &nota01);
            printf("Digite sua segunda nota: ");
            scanf("%f", &nota02);

            media = (nota01 + nota02)/2;

            if(nota01 >= 0 && nota01<= 100 && nota02 >= 0 && nota02 <= 100){
                if(media >= 70){
                    printf("\nAprovado");
                }
                else if(media >= 40 && media <= 69){
                    printf("\nEm exame final");
                    printf("\nQual a nota do exame?");
                    scanf("%f", &notaExame);

                estadoExame = media + notaExame;

                if(notaExame >= 0 && notaExame <= 100){
                    if(estadoExame >= 100){
                        printf("\nAprovado");
                    }else{
                        printf("\nReprovado no exame final");}
                }else{printf("\nA nota do seu exame deve estar entre 0 e 100");}
                }
            else{
                printf("\nReprovado");
                }
            }else{
                printf("\nSuas notas devem estar entre 0 e 100");
                }
            break;


        case 3:
            printf("Opção: %d", 3);

            srand(time(NULL));
            int teste = rand() % 11;

            while (contador >=0) {
            printf("\nTente adivinhar qual o número, dê um chute: \n");
            scanf("%d", &chute);

            if (chute > teste){
                printf ("\nO número está abaixo do seu chute.\n");
                printf ("\nTentativas restantes %d \n\n", contador);
                contador --;
            }else if (chute < teste){
                printf ("\nO número está acima do seu chute.\n");
                printf ("\nTentativas restantes %d \n\n", contador);
                contador --;
            }else{
                printf ("\nParabéns, você acertou! \n\n");
                contador = 0;
            }
            }
            break;

        case 4:
            printf("Opção: %d", 4);

            for(contador_4 = 100; contador_4>=1; contador_4--)
            {
            printf("\n%d\n", contador_4);
            }
            break;

        case 5:
            printf("Opção: %d", 5);

            printf ("\nDigite o primeiro número: \n");
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
            break;

        case 6:
            printf("Opção: %d", 6);

            printf("\nDigite até 10 números inteiros: ");
            scanf("%s",&vetor);

            numeroVetor = strlen(vetor);

            for(i=0; i<numeroVetor; i++){
            vetor_inteiro[i] = vetor[i] - '0';
            soma = vetor_inteiro[i] + soma;
            printf("%c,", vetor[i]);
            }
            media_vet = soma/numeroVetor;
            printf("\n O valor da média entre eles é: %.2f", media_vet);
            break;

        default:

            printf("\nOpção inválida");
            break;
   }
}while (escolha != 0);

    return 0;
}
