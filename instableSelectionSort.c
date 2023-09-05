#include <stdio.h>
#include <stdlib.h>

void unstableSelectionSort(int *array, int array_size)
{
    for (int i = 0; i < array_size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < array_size; j++)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}

int main()
{
    int array_size;
    printf("Digite o tamanho do array: ");
    scanf("%d", &array_size);

    int *array = (int *)malloc(array_size * sizeof(int));
    if (array == NULL)
    {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Digite os elementos do array: ");
    for (int i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
    }

    unstableSelectionSort(array, array_size);

    printf("Array ordenado: ");
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}
