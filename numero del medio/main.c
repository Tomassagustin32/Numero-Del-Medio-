#include <stdio.h>
#include <stdlib.h>

    int main() {

    int numeroUno;
    int numeroDos;
    int numeroTres;
    int maximo;
    int minimo;
    int numeroDelMedio;

    printf("Ingrese un numero : ");
    scanf("%d", &numeroUno);

    maximo=numeroUno;
    minimo=numeroUno;

    printf("Ingrese un numero : ");
    scanf("%d", &numeroDos);

    if(numeroDos<minimo){
        minimo=numeroDos;
    }
    else{
        if(numeroDos>maximo){
            maximo=numeroDos;
        }
    }

    printf("Ingrese un numero : ");
    scanf("%d", &numeroTres);

    if(numeroTres<minimo){
        minimo=numeroTres;
    }
    else{
        if(numeroTres>maximo){
            maximo=numeroTres;
        }
    }

    if(numeroUno<maximo && numeroUno>minimo){
        numeroDelMedio=numeroUno;
    }
    if(numeroDos<maximo && numeroDos>minimo){
        numeroDelMedio=numeroDos;
    }
    if(numeroTres<maximo && numeroTres>minimo){
        numeroDelMedio=numeroTres;
    }

    printf("El numero del medio es : %d",numeroDelMedio);

    return 0;

    }
