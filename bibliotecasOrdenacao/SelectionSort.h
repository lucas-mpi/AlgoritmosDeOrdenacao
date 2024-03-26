#include <stdio.h>
#include <locale.h>
#include <time.h>

void selectionSort(long int vetor[],long int tam)
{


    long int menor, cont1, cont2;

    struct timeval inicio, fim;
    gettimeofday(&inicio, NULL);

    for (cont1 = 0; cont1 < tam; cont1++)
    {
        menor = cont1;
        for (cont2 = cont1 + 1; cont2 < tam; cont2++)
        {
            if (vetor[cont2] < vetor[cont1])
            {
                menor = cont2;
            }
        }
        int aux = vetor[cont1];
        vetor[cont1] = vetor[menor];
        vetor[menor] = aux;

    }

    gettimeofday(&fim, NULL);
    double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec)/100000.0;
    printf("\n\nTempo de ordenação: %.7f\n ", tempo);

    for(long int cont = 0; cont < tam; cont++)
    {
        printf("%d ", vetor[cont]);
    }
}

