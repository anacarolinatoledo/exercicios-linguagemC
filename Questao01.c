#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

   int hora;
   printf("Escreva o valor da hora atual como inteiro: ");
   scanf("%d", &hora);

setlocale(LC_ALL, "");
printf("Nome da aluna: Ana Carolina Tolêdo Lôbo Maia");

if(hora >= 0 && hora < 12){
    printf("\nBom dia");
}else if(hora>=12 && hora<18){
    printf("\nBoa tarde");
}else if(hora >= 18 && hora <=23){
    printf("\nBoa noite");
}else{
    printf("\nHorário inválido");
};
return 0;
}

