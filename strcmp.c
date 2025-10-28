#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <time.h>

int main(){
    char str1[] = "Cag";
    char str2[] = "Gato";

    int resultado = strcmp(str1, str2);

    if (resultado == 0){
        printf("As strings são iguais.\n");
    }
    if (resultado < 0){
        printf("str1 vem antes de str2.\n");
    }else{
        printf("str1 vem depois de str2.\n");
    }
}