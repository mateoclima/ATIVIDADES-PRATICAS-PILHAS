int main() {
    PilhaChar minhaPilha;

    // Teste Exercício 1
    printf("--- Teste da Pilha de Caracteres ---\n");
    inicializar(&minhaPilha);

    printf("Empilhando A, B, C, D...\n");
    pushChar(&minhaPilha, 'A');
    pushChar(&minhaPilha, 'B');
    pushChar(&minhaPilha, 'C');
    pushChar(&minhaPilha, 'D');

    exibir(&minhaPilha);
    printf("Topo da pilha: %c\n", topChar(&minhaPilha));

    printf("\nDesempilhando todos os elementos:\n");
    while (!vazia(&minhaPilha)) {
        printf("Elemento desempilhado: %c\n", popChar(&minhaPilha));
        exibir(&minhaPilha);
    }

    return 0;
}