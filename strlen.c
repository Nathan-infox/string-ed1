#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <time.h>

int main(){
	char texto[] = "Olá, mundo!";
	int tamanho;
	
    size_t tamanho = strlen(texto);

    printf("O tamanho da string é: %zu\n", tamanho);
}
