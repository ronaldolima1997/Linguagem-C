#import <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL , "Portuguese");
    char nome[30];
    char ende[40];
    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite seu endere�o: ");
    gets(ende);
    printf("Seu nome �  %s e seu endere�o � %s ", nome, ende);
}


