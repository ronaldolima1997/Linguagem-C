#import <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL , "Portugese");
    char nome[30];
    printf("Digite o seu nome: ");
    gets(nome);
    printf("Seu nome é  %s", nome);
}


