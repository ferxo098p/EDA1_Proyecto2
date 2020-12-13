#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED
#include "cola.h"
#include "Pila.h"
#define MAX 4
#define TAM 2
#define SUP 10

extern char descripcion[MAX][15];
extern char colores[MAX][15];
extern char IDs[MAX][2];

typedef struct{
char ID[2];
char *color;
char *des;
}Pieza;

Pieza *generarPieza();
void incializarPieza(Pieza *pieza,int i,int a);
void listarPieza(Pieza pieza);
void apilar(ColaCircular *cola,Pila *pila);


#endif // ROBOT_H_INCLUDED
