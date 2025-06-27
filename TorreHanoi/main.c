#include <stdio.h>
#include "hanoi.h"

int main() {
    JogoHanoi meuJogo;
    int num_discos_hanoi = 3;

    printf("\n\n--- Teste da Torre de Hanoi com %d discos ---\n", num_discos_hanoi);
    inicializarHanoi(&meuJogo, num_discos_hanoi);
    exibirJogo(&meuJogo);
    resolverHanoi(&meuJogo, num_discos_hanoi, 1, 3, 2);

    printf("\nSolucao da Torre de Hanoi concluida!\n");
    
    return 0;
}