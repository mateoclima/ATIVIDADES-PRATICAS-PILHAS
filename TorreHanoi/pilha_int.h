#ifndef PILHA_INT_H
#define PILHA_INT_H

#include <stdbool.h>
#define MAX_DISCOS 10 

// Estrutura para a pilha de inteiros
typedef struct {
    int dados[MAX_DISCOS];
    int topo;
} PilhaEstatica;

// Protótipos das funções 
void inicializarPilha(PilhaEstatica* p);
bool push(PilhaEstatica* p, int valor);
int pop(PilhaEstatica* p);
int top(PilhaEstatica* p);
bool pilhaVazia(PilhaEstatica* p);
void exibirTorre(PilhaEstatica* p, char nome);

#endif