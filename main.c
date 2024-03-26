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


    }

    return 0;


}
