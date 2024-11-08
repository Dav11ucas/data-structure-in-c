#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct lista {
    int dado;
    struct lista *link;
} no;

no *crialista(int n) {
    no *topo, *p;
    int valor;
    topo = NULL; // Inicialmente, a pilha está vazia (topo é NULL)

    for (int i = 1; i <= n; i++) {
        printf("\nDigite o valor %d da pilha: ", i);
        scanf("%d", &valor);
        
        p = (no*) malloc(sizeof(no)); // Aloca um novo nó
        p->dado = valor;
        p->link = topo; // O novo nó aponta para o antigo topo
        topo = p; // O novo nó se torna o topo da pilha
    }
    return topo; // Retorna o topo da pilha
}

void escrevelista(no *p) {
    while (p != NULL) {
        printf("%d\t", p->dado);
        p = p->link;
    }
    printf("\n");
}

int main() {
    no *primeira;
    int n;

    printf("Criando uma pilha\n");
    // Solicita o número de elementos para a pilha
    do {
        printf("\nEntre com o numero de nós: ");
        scanf("%d", &n);
    } while (n < 0);

    primeira = crialista(n); // Cria a pilha

    // Exibe a pilha
    if (primeira != NULL) {
        printf("\nPilha Criada\n");
        escrevelista(primeira);
    } else {
        printf("\nPilha Vazia\n");
    }

    return 0;
}
