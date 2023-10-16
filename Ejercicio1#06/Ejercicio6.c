#include <stdio.h>

int main (){

    //Kevin Johan Maquis Calle

    int numingresado;

    printf("Ingrese el numero de 3 dijitos:\n");
    scanf("%d",&numingresado);

    if (numingresado<0){
        numingresado=-numingresado;
    }

    if (numingresado<100||numingresado>999)
    {
        printf ("El numero ingresado es incorrecto\n");
    }
    else
    {
        int dig1 = numingresado/100;
        int dig2 = (numingresado/10)%10;
        int dig3 = numingresado%10;

        printf("\nLos numeros enteros que se encuentran entre 1 y el primer digito son: ");
        for (int cont = 1; cont <= dig1; cont++)
        {
            printf("%d ",cont);
        }

        printf("\nLos numeros enteros que se encuentran entre 1 y el segundo digito son: ");
        for (int cont = 1; cont <= dig2; cont++)
        {
            printf("%d ",cont);
        }

        printf("\nLos numeros enteros que se encuentran entre 1 y el tercer digito son: ");
        for (int cont = 1; cont <= dig3; cont++)
        {
            printf("%d ",cont);
        }
    }
    printf("\nGRACIAS");
    return 0;
}
