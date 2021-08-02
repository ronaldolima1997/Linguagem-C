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
     printf("Seu nome é %s \nSua idade é %d\nSeu peso é %.1f", nome, idade, peso);

}
