#import <stdio.h>
#include <locale.h>
void main(){
     setlocale(LC_ALL, "Portuguese");
     char nome[30];
     int  idade;
     float peso;

     printf("Digite seu nome: ");
     gets(nome);
     printf("Digite sua idade: ");
     scanf("%d", &idade);
     printf("Digite seu peso: ");
     scanf("%f", &peso);
     printf("Seu nome � %s \nSua idade � %d\nSeu peso � %.1f", nome, idade, peso);

}
