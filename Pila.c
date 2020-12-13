#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include "cola.h"
#include "Pila.h"

NodoB *nuevoNodoB(){
    NodoB *n;
    n = (NodoB *)malloc(sizeof(NodoB));;
    n->sig = NULL;
return n;
}

Pila *crearPila(){
    Pila *pila;
    pila=(Pila *)malloc(sizeof(Pila));
    pila->tope=NULL;
    return pila;
}

int vacia(Pila pila){
    return pila.tope==NULL;
}

void push(Pila *pila, NodoB *n){
    n->sig= pila->tope;
    pila->tope=n;
}

void Listar(Pila pila){
    NodoB *q;
    q=pila.tope;
    if (!vacia(pila)){
        while(q!=NULL){
            printf("%c\t", q->info);
            q=q->sig;

        }
    }
    else
            printf("No hay datos en la pila...");
    printf("\n");
}

NodoB *pop (Pila *pila){
    NodoB *aux = pila->tope;
    pila->tope= pila->tope->sig;
    return aux;
}
