#include <stdio.h>
#include <sys/time.h>
#include <locale.h>


void bubbleSort(long int vetor[],long int tam)
{
    setlocale(LC_ALL, "Portuguese");

    struct timeval inicio, fim;
    gettimeofday(&inicio, NULL);

    printf("\nTempo de execução baseado na hora atual do computador:");
    for (long int cont = tam - 1; cont > 0; cont--)
    {
        for (long int cont2 = 0; cont2 < cont; cont2++)
        {
            if (vetor[cont2] > vetor[cont2 + 1])
            {
                long int aux = vetor[cont2];
                vetor[cont2] = vetor[cont2 + 1];
                vetor[cont2 + 1] = aux;
            }
        }
    }
    gettimeofday(&fim, NULL);
    double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec)/100000.0;
    printf("\n\nTempo de ordenacao: %.7f\n ", tempo);

}
