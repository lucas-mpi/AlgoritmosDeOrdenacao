#include <stdio.h>
#include <locale.h>
#include <time.h>


void mergeSort(long int vetor[], long int esq, long int dir)
{


    if (esq < dir)
    {

        long int meio = (esq + dir) / 2;
        mergeSort(vetor, esq, meio);
        mergeSort(vetor, meio +1, dir);
        merge(vetor, esq, meio, dir);
    }


}


void merge(long int vetor[], long int esq, long int meio, long int dir)
{



    long int auxSize = dir - esq + 1;
    long int aux[auxSize];
    //Copie os elementos para o array auxiliar
    for (long int i = esq; i <= dir; i++)
    {
        aux[i - esq] = vetor[i];
    }

    long int i = esq;
    long int j = meio + 1;
    long int k = esq;

    while (i <= meio && j <= dir)
    {
        if (aux[i - esq] <= aux[j-esq])
        {
            vetor[k] = aux[i - esq];
            i++;
        }
        else
        {
            vetor[k] = aux[j - esq];
            j++;
        }
        k++;
    }

    // Copte os elementos restantes da primelra metade se houver
    while (i <= meio)
    {
        vetor[k] = aux[i - esq];
        i++;
        k++;
    }



     // Cople os elementos restantes da segunda metade se houver
    while (j <= dir)
    {
        vetor[k] = aux[j - esq];
        j++;
        k++;
    }


}
