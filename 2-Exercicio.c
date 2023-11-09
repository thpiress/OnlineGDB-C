#include <stdio.h>

int main (){
    
    // Declarando Variaveis:
    
    int i;
    int tamanho = 5;
    int maior;
    int menor;
    int numeros[tamanho];
    
    // Pergunta ao ussuario:
    
    for(i = 0; i < tamanho; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    // Maior Numero:
    
    maior = numeros[0];
    for(i = 1; i < tamanho; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    }
    
    // Menor Numero:
    
    menor = numeros[0];
    for(i = 1; i < tamanho; i++){
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }
    
    // Resultado ao Usuario:
    
    printf("\nMostrando Números... \n");
     
    for(i = 0; i < tamanho; i++) {
        printf("%dº Números: %d \n", i + 1, numeros[i]);
    }
    
    // Media:
    
    printf("Maior Número: %d \n", maior);
    printf("Menor Número: %d \n", menor);
    
    return 0;
}
