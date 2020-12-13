#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#include "Robot.h"

typedef struct nodoPieza NodoPieza;
struct nodoPieza{
    Pieza dato;
    NodoPieza *sig;
};

typedef struct{
    NodoPieza *h,*t;
} ColaCircular;

ColaCircular *crearCola();
NodoPieza *nuevoNodoPieza(NodoPieza *h);
int vaciaCola(ColaCircular cola);
void Insertar(ColaCircular *cola,NodoPieza *n);
void ListarCola(ColaCircular cola);
NodoPieza *Borrar(ColaCircular *cola);
void siono(ColaCircular *cola,int i,int a);

#endif // COLA_H_INCLUDED
