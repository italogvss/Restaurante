#include "pedido.h"
#include "item.h"


// Funções do Pedido
FilaPedido *newPedido()
{

	FilaPedido *pdd = (FilaPedido *)malloc(sizeof(FilaPedido));
	pdd->inicio = NULL;
	pdd->fim = NULL;
    return pdd;
}

int isFilaPedidoEmpty(FilaPedido *p){
	return (p->inicio == NULL);
}

void addPedido(FilaPedido *pdd, char *cpf, Burger *bur)
{
	struct pdd *p = (struct pdd*)malloc(sizeof(pdd));
    p->cpf = cpf;
    p->BurgerList = newBurger();
    p->total = 0;

        if (isFilaPedidoEmpty(pdd))
        {
            pdd->inicio = p;
        }
        else
        {
            pdd->fim->prox = p;
        }
        pdd->fim = p;
    }

struct pdd* findPedido(FilaPedido *pdd, char *cpf)
{
	struct pdd* p = pdd->inicio;
	    while (p->prox != pdd->fim && p->cpf != cpf)
	    {
	        p = p->prox;
	    }
    printf("====== Pedido Encontrado =======\n");
    printf("cpf: %s - Total: %.2f \n", p->cpf, p->total);
    return p;
}

void imprimePedido(struct pdd* pdd)
{

    printf("====== Pedido =======\n");
    printf("cpf: %s - Total: %.2f \n", pdd->cpf, pdd->total);
    printf(">>>Lanches Pedidos\n");
    listaBurger(pdd->BurgerList->inicio);
    printf("====== ====== =======\n");
}
void listaPedido(FilaPedido *pdd)
{

	struct pdd* p = pdd->inicio;
	while(p->prox != NULL){
		imprimePedido(p);
		p = p->prox;
	}

	imprimePedido(p);
}

