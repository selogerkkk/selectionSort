#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *array, int array_size)
{
    for (int i = 0; i < array_size - 1; i++)
    {
        int menor_indice = i;
        for (int j = i + 1; j < array_size; j++)
        {
            if (array[j] < array[menor_indice])
            {
                menor_indice = j;
            }
        }
        int temp = array[i];
        array[i] = array[menor_indice];
        array[menor_indice] = temp;
    }
}

int main()
{
    int array_size;
    printf("Digite o tamanho da array: ");
    scanf("%d", &array_size);

    int *array = (int *)malloc(array_size * sizeof(int));

    if (array == NULL)
    {
        printf("Erro ao alocar memória!");
        return 1;
    }

    printf("Insira os elementos da array: ");
    for (int i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
    }

    selectionSort(array, array_size);

    printf("Array ordenada:");
    for (int i = 0; i < array_size; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");
    free(array);

    return 0;
}