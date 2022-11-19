#include "item.h"

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int isBurgerEmpty(Burger *bur)
{
    return (bur->inicio == NULL);
}

// Funções do hamburguer
Burger *newBurger()
{
    Burger *bur = (Burger *)malloc(sizeof(Burger));
    bur->inicio = NULL;
    bur->fim = NULL;
    return bur;
}

void addBurger(Burger *bur, int id, char *nome, char *desc, double precoP, double precoM, double precoG, bool disponivel)
{

    struct no *b = (struct no*)malloc(sizeof(struct no));
    b->id = id;
    b->nome = nome;
    b->desc = desc;
    b->precoP = precoP;
    b->precoM = precoM;
    b->precoG = precoG;
    b->disponivel = disponivel;
    b->prox = NULL;

    if (isBurgerEmpty(bur))
    {
        bur->inicio = b;
    }
    else
    {
        bur->fim->prox = b;
    }
    bur->fim = b;
}


struct no *findBurger(Burger *bur, int id)
{
    struct no *b = bur->inicio;
    while (b->prox != bur->fim && b->id != id)
    {
        b = b->prox;
    }
    printf("=============\n");
    printf("id: %d - Lanche: %s \n Descrição: %s \n Preços: P R$%.2f M R$%.2f G R$%.2f \n", b->id, b->nome, b->desc, b->precoP, b->precoM, b->precoG);
    return b;
}

void imprimeBurger(struct no *bur)
{
    printf("<=>\n");
    printf("id: %d - Lanche: %s \n Descrição: %s \n Preços: P R$%.2f M R$%.2f G R$%.2f \n", bur->id, bur->nome, bur->desc, bur->precoP, bur->precoM, bur->precoG);
}

//Falta Arrumar a lista
void listaBurger(Burger* bur)
{
	struct no* b = bur->inicio;
	while(b->prox != NULL){
		imprimeBurger(b);
		b = b->prox;
	}

	imprimeBurger(b);
}
