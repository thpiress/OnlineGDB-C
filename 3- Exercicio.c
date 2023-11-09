#include <stdio.h>

int main (){
    
    // Declarando Variaveis:
    
    int i;
    int tamanho = 6;
    int pares = 0;
    int impares = 0;
    int numeros[tamanho];
    
    // Pergunta ao ussuario:
    
    for(i = 0; i < tamanho; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    // Resultado ao Usuario:
    
    printf("\nMostrando Números... \n");
     
    for(i = 0; i < tamanho; i++) {
        printf("%dº Números: %d \n", i + 1, numeros[i]);
        
        // Numero pares:
        
        numeros[i] % 2 == 0 ? pares++ : impares++;
        
     }
    
    // Media:
    
    printf("Números Pares: %d \n", pares);
    printf("Números Impares: %d \n", impares);
    
    return 0;
}
