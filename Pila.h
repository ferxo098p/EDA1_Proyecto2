#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include "Robot.h"

typedef struct nodoB NodoB;

struct nodoB{
    Pieza info;
    NodoB *sig;
};

typedef struct{
    NodoB *tope;
}Pila;

NodoB *nuevoNodoB();
Pila *crearPila();
int vacia(Pila pila);
void push(Pila *pila, NodoB *n);
NodoB *pop(Pila *pila);
void Listar(Pila pila);

#endif // PILA_H_INCLUDED
