#ifndef HANOI_H
#define HANOI_H

#include <stdbool.h>
#include "pilha_int.h"

typedef struct {
    PilhaEstatica torre[3]; // Três torres (A, B, C) 
    int num_discos;
} JogoHanoi;

void exibirJogo(JogoHanoi* jogo);
void inicializarHanoi(JogoHanoi* jogo, int n);
bool moverDisco(JogoHanoi* jogo, int origem, int destino);
void resolverHanoi(JogoHanoi* jogo, int n, int origem, int destino, int auxiliar);

#endif