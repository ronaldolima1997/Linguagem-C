#import <stdio.h>
#include <locale.h>
void main(){

    char nome1[30];
    char nome2[30];
    char nome3[30];
    char sex1;
    char sex2;
    char sex3;
    float n1;
    float n2;
    float n3;

    printf("<<< LISTAGEM >>>\n");
    printf("Cadastrando a primeira pessoa:\n");
    printf("-------------------------------------------\n");
    printf("NOME:");
    gets(nome1);
    printf("SEXO [M/F]:");
    fflush(stdin);
    sex1 = getchar();
    printf("NOTA:");
    scanf("%f", &n1);


    printf("Cadastrando a segunda pessoa:\n");
    printf("-------------------------------------------\n");
    printf("NOME:");
    fflush(stdin);
    gets(nome2);
    printf("SEXO [M/F]:");
    fflush(stdin);
    sex2 = getchar();
    printf("NOTA:");
    scanf("%f", &n2);


    printf("Cadastrando a terceira pessoa:\n");
    printf("-------------------------------------------\n");
    printf("NOME:");
    fflush(stdin);
    gets(nome3);
    printf("SEXO [M/F]:");
    fflush(stdin);
    sex3 = getchar();
    printf("NOTA:");
    scanf("%f", &n3);

    printf("Listagem Completa\n");
    printf("-------------------------------------------\n");
    printf("Nome                            Sexo   Nota\n");
    printf("%-25s  %7c     %.2f\n",nome1, sex1,n1);
    printf("%-25s  %7c     %.2f\n",nome2, sex2,n2);
    printf("%-25s  %7c     %.2f\n",nome3, sex3,n3);



}
