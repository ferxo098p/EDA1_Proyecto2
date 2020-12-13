#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Robot.h"
#include "cola.h"

int main()
{
    ColaCircular *cola;
    int i,a=0;

    cola=crearCola();

    for(i=0;i<4;i++){
        siono(cola,i,a);
        system("pause");
    }
    a++;

    ListarCola(*cola);

    return 0;
}
