#ifndef PILHA_H
#define PILHA_H

#include <stdbool.h>
#define MAX_SIZE 50

// Estrutura para pilha
typedef struct {
char dados[MAX_SIZE];
int topo;
} PilhaChar;


void inicializar(PilhaChar* p);
bool pushChar(PilhaChar* p, char c);
char popChar(PilhaChar* p);
char topChar(PilhaChar* p);
bool vazia(PilhaChar* p);
void exibir(PilhaChar* p);

#endif