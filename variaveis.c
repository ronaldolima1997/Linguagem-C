#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL , "Portuguese");
    unsigned int idade = 24;
    float peso = 85.5;
    char sexo = 'M';
    char nome[] = "Ronaldo Lima";
    printf("Sua idade é %i \n Seu peso é %2.f \n Seu sexo é %c \n Seu nome é %s", idade, peso, sexo, nome);
}



