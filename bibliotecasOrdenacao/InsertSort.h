#include <stdio.h>
#include <locale.h>
#include <time.h>


void insertSort(long int vetor[],long int tam)
{
    struct timeval inicio, fim;
    gettimeofday(&inicio, NULL);
    setlocale(LC_ALL, "Portuguese");
    printf("\nTempo de execução baseado na hora atual do computador:");

    for (long int cont = 1; cont < tam; cont++)
    {
        long int aux = vetor[cont];
        long int cont2 = cont - 1;

        while (cont2 >= 0 && aux < vetor[cont2])
        {
            vetor[cont2 + 1] = vetor[cont2];
            cont2 = cont2 - 1;
            vetor[cont2 + 1] = aux;
        }
    }
    gettimeofday(&fim, NULL);
    double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec)/100000.0;
    printf("\n\nTempo de ordenação: %.7f\n ", tempo);

}
