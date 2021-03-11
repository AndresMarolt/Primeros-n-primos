#include <stdio.h>

int main()
{
    int NUM=2, i, cont=0, divisores=0;
    int N;

    printf("Va a conocer los primeros N numeros primos. Ingrese N: ");
    scanf("%d", &N);
    printf("\n");

    while(cont<N)
    {
        for(i=1; i<NUM; i++)
        {
            if(NUM%i==0)
                divisores++;
        }
        if(divisores<=1){
            printf("%d\n", i);
            cont++;}
        NUM++;
        divisores=0;
    }
}
