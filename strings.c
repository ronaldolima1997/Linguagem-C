#import <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL , "Portuguese");
    char nome[30];
    char ende[40];
    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite seu endereço: ");
    gets(ende);
    printf("Seu nome é  %s e seu endereço é %s ", nome, ende);
}


