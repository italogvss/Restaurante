#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "item.h"
#include "pedido.h"

int main(){

    Burger* bur = newBurger();
    addBurger(bur, 1, "X-Salada", "Salada", 5, 10, 15, true);
    addBurger(bur, 2, "X-Bacon", "Bacon", 5, 10, 15, true);
    addBurger(bur, 3, "X-Frango", "Frango", 5, 10, 15, true);
    addBurger(bur, 4, "X-Tudo", "Tudo", 5, 10, 15, true);
    addBurger(bur, 5, "X-Tudo", "Tudo", 5, 10, 15, true);
    struct no* b = findBurger(bur, 3);
    listaBurger(bur);
    return 0;

}
 
