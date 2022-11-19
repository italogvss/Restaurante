#ifndef PEDIDO_H
#define PEDIDO_H

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "item.h"

//Pedidos
typedef struct pdd
{
    char *cpf;
    Burger* BurgerList;
    float total;
    struct pdd* prox;
};

typedef struct{
    struct pdd* inicio;
    struct pdd* fim;
} FilaPedido;

int isFilaPedidoEmpty(FilaPedido *p);
FilaPedido* newPedido();
void addPedido(FilaPedido* pdd, char* cpf, Burger* bur);
void dequeue();
struct pdd* findPedido(FilaPedido* pdd, char* cpf);
void deletePedido();
void imprimePedido(struct pdd* pdd);
void listaPedido(FilaPedido* pdd);
float calcTotal();
#endif
