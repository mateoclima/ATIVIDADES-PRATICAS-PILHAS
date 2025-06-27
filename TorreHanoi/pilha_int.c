#include <stdio.h>
#include "pilha_int.h"

void inicializarPilha(PilhaEstatica* p) {
    p->topo = -1;
}

bool pilhaVazia(PilhaEstatica* p) {
    return p->topo == -1;
}

bool push(PilhaEstatica* p, int valor) {
    if (p->topo >= MAX_DISCOS - 1) {
        printf("Erro: Torre cheia!\n");
        return false;
    }
    p->topo++;
    p->dados[p->topo] = valor;
    return true;
}

int pop(PilhaEstatica* p) {
    if (pilhaVazia(p)) {
        return -1; // Retorna um valor de erro
    }
    return p->dados[p->topo--];
}

int top(PilhaEstatica* p) {
    if (pilhaVazia(p)) {
        return -1; // Retorna um valor de erro
    }
    return p->dados[p->topo];
}

void exibirTorre(PilhaEstatica* p, char nome) {
    printf("Torre %c: [ ", nome);
    for (int i = 0; i <= p->topo; i++) {
        printf("%d ", p->dados[i]);
    }
    printf("]\n");
}