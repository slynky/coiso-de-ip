#include <stdio.h> //vai se fuder biblioteca padrao do c,using system do c# é superior em todos os aspectos                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 porque vc ainda ta aqui nao tem nada pra fazer nao vagabundo 
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <locale.h>




void linguagem() {
    setlocale(LC_ALL, "Portuguese"); //essa funçao permite usar acento e caracteres especiais do português
}




//declaração basica dos struct
typedef struct {
    char desc[200];
    float preco;
    int codpra;
} Pratos;



typedef struct {
    char nome[100];
    int cod;
    Pratos *pratos;  // Ponteiro para um array de 100 pratos
} restaurantes;

void print_asteriticos(){
    for(int i = 0; i < 50; i++){
        printf("*");
    }
}

void tela_de_cadastro(){
print_asteriticos();
printf("\n\t\tuaiFood - Restaurante\n");
print_asteriticos();
}



void colocar_restaurante(){ //chamar o colocar prato depois de ler o restaurante assim
    //lore ipsum

} //separar isso num void pra organizar melhor



void colocar_prato(){ 
    //lore ipsum

} //mesma coisa do de cima






int main() {
    linguagem();

    // Alocação de memória para o array de 200 restaurantes
    restaurantes *restaurante = malloc(200 * sizeof(restaurantes));
    if (restaurante == NULL) {
        printf("Erro ao alocar memória para restaurantes.\n");
        return 1;
    }

    // Alocação de memória para o array de 100 pratos de cada restaurante
    for (int i = 0; i < 200; i++) {
        restaurante[i].pratos = malloc(100 * sizeof(Pratos));
        if (restaurante[i].pratos == NULL) {
            printf("Erro ao alocar memória para os pratos do restaurante %d.\n", i);
            return 1;
        }
    }

    tela_de_cadastro(); // printa a tela de cadastro que o corno pediu

    //vai ter um switch case aqui para mostrar as possiveis acões

    // Liberação da memória alocada
    for (int i = 0; i < 200; i++) {
        free(restaurante[i].pratos);
    }
    free(restaurante);

    return 0;
}
