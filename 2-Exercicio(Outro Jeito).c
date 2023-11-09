#include <stdio.h>

int main (){
    
    // Declarando Variaveis:
    
    int i;
    int tamanho = 5;
    int maior = 0;
    int menor = 9999;
    int numeros[tamanho];
    
    // Pergunta ao ussuario:
    
    for(i = 0; i < tamanho; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    // Maior Numero:
    
   
    for(i = 0; i < tamanho; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
    }
    
    // Menor Numero:
    
    
    for(i = 0; i < tamanho; i++){
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
