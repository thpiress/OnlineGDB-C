#include <stdio.h>

int main (){
    
    // Declarando Variaveis:
    
    int i;
    int tamanho = 4;
    float soma = 0;
    float media;
    float notas[tamanho];
    
    // Pergunta ao ussuario:
    
    for(i = 0; i < tamanho; i++) {
        printf("Digite a %dº nota: ", i + 1);
        scanf("%f", &notas[i]);
        
        soma += notas[i];
    }
    
    media = soma / i; // i = 3
    
    printf("\nMostrando Notas... \n");
    
    for(i = 0; i < tamanho; i++) {
        printf("%dº Nota: %.1f \n", i + 1, notas[i]);
    }
    
    // Media:
    
    printf("Média: %.1f \n", media);
    
    return 0;
}