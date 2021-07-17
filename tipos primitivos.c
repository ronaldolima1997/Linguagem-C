#import <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL , "Portuguese");
    printf("O %s tem %i anos", "Ronaldo\n", 24);
    printf("O seu peso é %6.2fKG \n", 85.5);
    printf("Seu sexo é %c" , 'M');

}
