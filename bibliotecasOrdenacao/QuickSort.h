#include <stdio.h>
#include <time.h>



int particione(long int vetor[], long int esq, long int dir)
{
    long int pivo = vetor[esq], up = dir, down = esq, aux;
    while(down < up)
    {
        while(vetor[down] <= pivo && down < dir)
        {
            down = down + 1;
        }
        while(vetor[up] > pivo)
        {
            up = up - 1;
        }
        if(down < up)
        {
            aux = vetor[down],
            vetor[down] = vetor[up],
            vetor[up] = aux;
        }

        vetor[esq] = vetor[up];
        vetor[up] = pivo;
        return(up);
    }

}



void quickSort(long int vetor[], long int esq, long int dir)
{
    long int i;

    if (dir > esq)
    {
        i = particione(vetor, esq, dir);
        quickSort(vetor, esq, i-1);
        quickSort(vetor, i+1, dir);
    }



}
