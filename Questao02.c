#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   float nota01 = 0;
   float nota02 = 0;
   float media = 0;
   float notaExame = 0;
   float estadoExame = 0;

   printf("Digite sua primeira nota: ");
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
                    printf("\nReprovado");}
            }else{printf("A nota do seu exame deve estar entre 0 e 100");}
            }
        else{
            printf("\nReprovado");
        }
    }else{printf("Suas notas devem estar entre 0 e 100");}
}
