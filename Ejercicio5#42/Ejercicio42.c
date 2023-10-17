#include <stdio.h>

int main (){
    //Kevin Johan Maquis Calle
    int ant = 0;
    int act = 1;
    int sumnum = 0;
    int cont = 0;

    while (act<=1000)
    {
        if (act%2==0)
        {
           sumnum=sumnum+act;
           cont++;
        }
        int sig=ant+act;
        ant=act;
        act=sig;
    }
        int prom=sumnum/cont;

        printf("\nEl promedio de los numeros enteros de la serie de Fibonacci entre 0 y 1000 es: %d",prom);

    printf("\nGRACIAS");
    return 0;
}
