#include <stdio.h>

int main(){

//Kevin Johan Maquis Calle

    int numsuperior = 32768; 
    int numprimo;

    for (int i = numsuperior-1; i>=2 ; i--)
    {
        int PrimoSi=1;
        for (int j = 2; j*j<=i ; j++)
        {
            if (i%j==0)
            {
                PrimoSi=0;
                break;
            }
            
        }

        if (PrimoSi)
        {
            numprimo=i;
            break;
        }
        

    }
    if (numprimo!=0)
    {
        printf("\nEl numero primo mas cercano por debajo a %d es: %d ", numsuperior,numprimo);
    }
    

return 0;
}