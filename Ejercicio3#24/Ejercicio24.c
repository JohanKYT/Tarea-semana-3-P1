#include <stdio.h>

int main(){

    int numingresado;
    int sumanum=0;
    int dig;

    printf("Ingrese el numero\n");
    scanf("%d",&numingresado);

    if (numingresado<0)
    {
        numingresado=-numingresado;
    }

    while (numingresado>0)
    {
        dig=numingresado%10;
        if (dig%2==0)
        {
            sumanum=sumanum+dig;
        }
        numingresado= numingresado/10;
    }
    
    printf ("La suma de los numeros es: %d ",sumanum);

    return 0;
}