#include <stdio.h>
#include <stdlib.h>

#define STR_SIZE 100

//  48 ateh 57
//  strtod 

struct nodo {
    char operacao;
    float valor;
    struct nodo* fe;
    struct nodo* fd;
};

struct nodo* criaNodo(char operacao, int valor) {
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
    char *str = malloc(sizeof(char) * 100);
    fgets(str, 100, stdin);
    
    puts(str);

    return 0;
}