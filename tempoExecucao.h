#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void tempoExecucao(struct timeval inicio, struct timeval fim)
{

    double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec)/100000.0;
    printf("\n\nTempo de ordenação: %.7f\n ", tempo);
}
