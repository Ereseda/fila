#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 50

typedef struct fila{
    int elem[TAM];
    int cabecalho, ultimo;
}FILA;


void menu(){
	setlocale(LC_ALL,"Portuguese");
    printf("==================== MENU ====================\n");
    printf("\n");
    printf("  0 - SAIR\n");
    printf("  1 - ENFILEIRAR\n");
    printf("  2 - DESINFILEIRAR\n");
    printf("  3 - IMPRIMIR\n");
    printf("\n");
    printf("==============================================\n");
}

void inicializar(FILA *fila){
    fila->ultimo = 0;
    fila->cabecalho = fila->ultimo;
}

int filaVazia(FILA *fila){
    return (fila->ultimo == fila->cabecalho);
}
int filaCheia(FILA *fila){
    int proxi = (fila->ultimo + 1)%TAM;
    return(proxi == fila-> cabecalho);
}
int enfileirar(FILA* fila, int elemento){
    int proxi;
    if(filaCheia(fila)){
        printf("\nFila Cheia!");
        return 0;
    }
    proxi= (fila->ultimo + 1)%TAM;
    fila->elem[proxi]= elemento;
    fila->ultimo = proxi;
    return 1;
}
int desenfileirar(FILA* fila){
    int removido = -1;

    if(filaVazia(fila)){
        printf("\nFila Vazia!");
        return removido;
    }
    fila->cabecalho =(fila->cabecalho + 1)%TAM;
    removido = fila->elem[fila->cabecalho];
    return removido;
}
void imprmirFila(FILA* fila){
}


int main(){
    menu();
    /*
    FILA fila;
    int aux;
    inicializar(&fila);
    imprimir(&fila);
    enfileirar(&fila,2);
    imprimir(&fila);
    enfileirar(&fila,5);
    imprimir(&fila);
    enfileirar(&fila,7);
    imprimir(&fila);
    aux = desenfileirar(&fila);
    imprimir(&fila);
    aux = desenfileirar(&fila);
    imprimir(&fila);
    aux = desenfileirar(&fila);
    imprimir(&fila);
    aux = desenfileirar(&fila);
    imprimir(&fila);
*/
    return 0;
}
