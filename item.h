#ifndef ITEM_H
#define ITEM_H

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//Hamburguer
struct no
{
    int id;
    char *nome;
    char *desc;
    double precoP;
    double precoM;
    double precoG;
    bool disponivel;
    struct no* prox;
};

typedef struct{
    struct no* inicio;
    struct no* fim;
} Burger, Bebida;

int isBurgerEmpty(Burger *bur);
Burger* newBurger();
void addBurger(Burger* bur, int id, char* nome, char* desc, double precoP, double precoM, double precoG, bool disponivel);
struct no* findBurger(Burger* bur, int id);
void imprimeBurger(struct no* bur);
void listaBurger(Burger* bur);

#endif
