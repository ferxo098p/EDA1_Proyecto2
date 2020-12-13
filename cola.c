#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cola.h"

NodoPieza *nuevoNodoPieza(NodoPieza *h){
    NodoPieza *n;
    n = (NodoPieza *)malloc(sizeof(NodoPieza));
    n->sig = h;
return n;
}

ColaCircular *crearCola(){
    ColaCircular *cola;
    cola=(ColaCircular *)malloc(sizeof(ColaCircular));
    cola->h=NULL;
    cola->t=NULL;
    return cola;
}

int vaciaCola(ColaCircular cola){
    return cola.h==NULL;
}

void Insertar(ColaCircular *cola,NodoPieza *n){
    if(vaciaCola(*cola)){
        cola->h=n;
        cola->t=n;
        cola->t->sig=cola->h;
        return;
    }
    (cola->t)->sig=n;
    cola->t=n;
}

void siono(ColaCircular *cola,int i,int a){
     NodoPieza *unNodoPieza;
     Pieza *z;
     srand (time(NULL));
     if(rand()%100 > 50){
        unNodoPieza=nuevoNodoPieza(cola->h);
        z = generarPieza();
        incializarPieza(z,i,a);
        unNodoPieza->dato=*z;
        Insertar(cola,unNodoPieza);
        printf("El robot %s termino el producto: ",IDs[i]);
        listarPieza(*z);
     }
     printf("\n\n");
}

void ListarCola(ColaCircular cola){
    NodoPieza *q;
    q=cola.h;
    if (q!=NULL) {
        do{
            listarPieza(q->dato);
            q=q->sig;
        }while (q!=cola.h);
        printf("\n");
    }
    else
        printf("No hay datos\n");
}

NodoPieza *Borrar (ColaCircular *cola){
   NodoPieza *aux = NULL;
   if(! vaciaCola(*cola)) {
       aux = cola->h;
       if (cola->h==cola->t)
          cola->h=cola->t=NULL;
       else {
          cola->h= cola->h->sig;
          cola->t->sig = cola->h;
       }
   }
   return aux;
}
