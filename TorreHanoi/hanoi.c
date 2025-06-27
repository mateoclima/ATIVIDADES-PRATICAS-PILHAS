#include "hanoi.h"

void exibirJogo(JogoHanoi* jogo) {
    printf("\n--- Estado do Jogo ---\n");
    exibirTorre(&jogo->torre[0], 'A');
    exibirTorre(&jogo->torre[1], 'B');
    exibirTorre(&jogo->torre[2], 'C');
    printf("---------------------\n");
}


void inicializarHanoi(JogoHanoi* jogo, int n) { 
    jogo->num_discos = n;
    // Inicializa as três pilhas
    for (int i = 0; i < 3; i++) {
        inicializarPilha(&jogo->torre[i]);
    }
    // Adiciona os discos na torre A (origem), do maior para o menor
    for (int i = n; i > 0; i--) {
        push(&jogo->torre[0], i);
    }
}

bool moverDisco(JogoHanoi* jogo, int origem, int destino) { // 
    // Converte para índice do array (A=0, B=1, C=2)
    origem--;
    destino--;

    PilhaEstatica* pOrigem = &jogo->torre[origem];
    PilhaEstatica* pDestino = &jogo->torre[destino];

    // Verifica se o movimento é válido 
    if (pilhaVazia(pOrigem)) {
        printf("Movimento invalido: Torre de origem esta vazia!\n");
        return false;
    }

    int discoOrigem = top(pOrigem);
    int discoDestino = top(pDestino);

    // Disco menor só pode ir sobre disco maior 
    if (!pilhaVazia(pDestino) && discoOrigem > discoDestino) {
        printf("Movimento invalido: Nao pode mover disco %d sobre %d!\n", discoOrigem, discoDestino);
        return false;
    }

    // Realiza o movimento
    push(pDestino, pop(pOrigem));
    return true;
}

void resolverHanoi(JogoHanoi* jogo, int n, int origem, int destino, int auxiliar) { 
    if (n > 0) {
        // Mover n-1 discos da origem para o auxiliar
        resolverHanoi(jogo, n - 1, origem, auxiliar, destino);

        // Mover o disco n da origem para o destino
        printf("Mover disco %d da Torre %c para a Torre %c\n", n, 'A' + origem - 1, 'A' + destino - 1);
        moverDisco(jogo, origem, destino);
        exibirJogo(jogo);

        // Mover n-1 discos do auxiliar para o destino
        resolverHanoi(jogo, n - 1, auxiliar, destino, origem);
    }
}
