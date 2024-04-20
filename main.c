#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "headers.h"


int main(void)
{

    setlocale(LC_ALL, "Portuguese");

    long int qntdRegistros, *vetor, opcaoMenu;


    printf("Informe a quantidade de registros para ordenação: ");
    scanf("%d", &qntdRegistros);

    vetor = malloc(qntdRegistros * sizeof(int));

    int aux = 0;
    for (long int cont = qntdRegistros - 1; cont >= 0; cont--)
    {
        vetor[aux++] = cont;

    }


    printf("\n1 - BubbleSort");
    printf("\n2 - InsertSort");
    printf("\n3 - SelectionSort");
    printf("\n4 - ShellSort");
    printf("\n5 - QuickSort");
    printf("\n6 - Merge Sort");
    printf("\nInforme a opção de ordenação desejada: ");
    scanf("%d", &opcaoMenu);

    switch(opcaoMenu)
    {
        case 1:
            bubbleSort(vetor, qntdRegistros);
        break;

        case 2:
            insertSort(vetor, qntdRegistros);
        break;

        case 3:
            selectionSort(vetor, qntdRegistros);
        break;

        case 4:
            shellSort(vetor, qntdRegistros);
        break;

        case 5:
            imprimeVetor(vetor, 50);
            quickSort(vetor, 0, qntdRegistros-1);
            imprimeVetor(vetor, 50);
        break;

        case 6:
            imprimeVetor(vetor, 50);

            struct timeval inicio, fim;
            gettimeofday(&inicio, NULL);

            mergeSort(vetor, 0, qntdRegistros - 1);

            gettimeofday(&fim, NULL);
            double tempo = (fim.tv_sec - inicio.tv_sec) + (fim.tv_usec - inicio.tv_usec)/100000.0;
            printf("\n\nTempo de ordenação: %.7f\n ", tempo);

            imprimeVetor(vetor, 50);


    }

    return 0;


}
