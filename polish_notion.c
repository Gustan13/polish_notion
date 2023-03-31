#include <stdio.h>
#include <stdlib.h>

//  48 ateh 57

struct nodo {
    char operacao;
    float valor;
    struct nodo* fe;
    struct nodo* fd;
}

struct nodo* criaNodo(operacao, valor) {
    struct nodo* nodo = malloc(sizeof(struct nodo));

    nodo->operacao = 32;
    nodo->valor = 0;
    nodo->fe = NULL;
    nodo->fd = NULL;

    return nodo;
}

int addNode(struct nodo* head, struct nodo* newNode) {
    if (head == NULL) {
        head = newNode;
        return 1;
    }

    if (head->operacao == 32)
        return 0;

    if (addNode(head->fe, newNode)) {
        return 1;
    }

    if (addNode(head->fd, newNode)) {
        return 1;
    }

    return 0;
}

int main() {
    struct nodo* head = criaNodo('*', 0);
    
    addNode(head);

    puts(head->operacao);

    return 0;
}