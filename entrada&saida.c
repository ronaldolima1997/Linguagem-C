#import <stdio.h>
#include <locale.h>
void main(){

    setlocale(LC_ALL , "Portuguese");
   /* int n;
    float n1;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    printf("Digite um numero real: ");
    scanf("%f", &n1);
    printf("Você digitou os numero %d e %.1f", n, n1);
*/
    char r;
    char s;
    printf("Digite só uma letra: ");
    fflush(stdin);
    r = getchar();               //fflush(stdin);  este comando limpa a memoria deixando responder a próxima entrada.
    //scanf("%c", &r);
    printf("Digite outra letra: ");
    fflush(stdin);
    //scanf("%c", &s);
    s = getchar(); //uso mais correto para ler o caracter.
    printf("Você digitou as letras \"%c\" e \"%c\"",r, s);



}
