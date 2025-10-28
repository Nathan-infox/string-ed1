#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <time.h>

int main(){
	char origem[] = "Nathan";
    char destino[20]; // espaço suficiente

    strcpy(destino, origem); // copia o conteúdo

    printf("Origem: %s\n", origem);
    printf("Destino: %s\n", destino);
}

