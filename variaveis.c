#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL , "Portuguese");
    unsigned int idade = 24;
    float peso = 85.5;
    char sexo = 'M';
    char nome[] = "Ronaldo Lima";
    printf("Sua idade � %i \n Seu peso � %2.f \n Seu sexo � %c \n Seu nome � %s", idade, peso, sexo, nome);
}



