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
        

    }

return 0;
}