// Desafio de Xadrez - MateCheck

#include <stdio.h> // Inclui a biblioteca de entrada e saída, necessária para usar printf.

int main() {
    // Declaração de variável para armazenar o movimento da Torre.    
    int mov_torre = 1;
    printf("--- Movimento da Torre ---\n");
    // Enquanto variável for menor ou igual a 5:    
    while (mov_torre <=5) {
        // Move Torre cinco vezes à direita, imprime "Direita".
        printf("%d: Direita\n", mov_torre);
        // Incrementa (aumenta) 1 ao movimento.
        mov_torre++;
    }
    
    // Declaração de variável para armazenar o movimento do Bispo.
    int mov_bispo = 1;
    printf("\n--- Movimento do Bispo ---\n");
    // Move ao menos uma vez para cima direita, imprime "Cima Direita".
    do {
        printf("%d: Cima Direita\n", mov_bispo);
        // Incrementa (aumenta) 1 ao movimento.
        mov_bispo++;
    // Continua movendo enquanto variável for menor ou igual a 5, imprime "Cima Direita".
    } while (mov_bispo <=5);
    
    // Declaração de variável para armazenar o movimento da rainha.
    printf("\n--- Movimento da Rainha ---\n");
    // Para cada variável menor ou igual a 8, incrementa (aumenta) 1:
    for (int mov_rainha = 1 ; mov_rainha <=8 ; mov_rainha++) {
        // Move e imprime "Esquerda".
        printf("%d: Esquerda\n", mov_rainha);
    }
    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;        
}