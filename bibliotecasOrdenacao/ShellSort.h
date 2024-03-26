#include <stdio.h>
#include <locale.h>
#include <time.h>

void shellSort(long int vetor[], long int tam)
{
    struct timeval inicio, fim;
    gettimeofday(&inicio, NULL);

    long int h, n, j, i, aux;

    for (h=1; h < tam; h=3*h+1);

    while (h > 0)
    {
        h = (h-1)/3;
        for (i = h; i < tam; i++)
        {
            aux = vetor[i];
            j = i;
            while (vetor[j-h] > aux)
            {
                vetor[j] = vetor[j - h];
                j -= h;
                if (j < h)
                    break;
            }
            vetor[j] = aux;
        }
    }


    gettimeofday(&fim, NULL);
    double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec)/100000.0;
    printf("\n\nTempo de ordenação: %.7f\n ", tempo);



}
