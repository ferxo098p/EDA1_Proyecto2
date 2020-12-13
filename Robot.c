#include <stdio.h>
#include <stdlib.h>
#include "Robot.h"
#include <string.h>
#include <time.h>
#include "cola.h"
#include "Pila.h"

char descripcion[MAX][15] = {"Puerta","Cofre","Cajuela","Toldo"};
char colores[MAX][15]={"Negro","Rojo"};
char IDs[MAX][2]={"A","B","C","D"};

Pieza *generarPieza(){
    Pieza *p;
    p = (Pieza *)malloc(sizeof(Pieza));
    p->des = (char *)calloc(SUP,sizeof(char));
    p->color = (char *)calloc(SUP,sizeof(char));
    return p;
}

void incializarPieza(Pieza *pieza,int i,int a){
    srand (time(NULL));
    char cadena[2];
    itoa(a,cadena,10);
    strcpy(pieza->ID,IDs[i]);
    strcat(pieza->ID,cadena);
    strcpy(pieza->color,colores[rand()%2]);
    strcpy(pieza->des,descripcion[rand()%4]);
}

void listarPieza(Pieza pieza){
    printf("%s %s %s\t",pieza.ID,pieza.des,pieza.color);
}

void apilar(ColaCircular *cola,Pila *pila){
    NodoB *p;
    NodoPieza *aux;
    p = nuevoNodoB();
    aux = Borrar(cola);
    p->info = aux->dato;
    push(pila,p);
}
