#include <stdio.h>

int main()
{
    int array_original[] = {25, 21, 25, 22, 21};

    int array_size = sizeof(array_original) / sizeof(array_original[0]);

    printf("Array desordenado: \n");
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", array_original[i]);
    }
    printf("\n");

    if (array_original != NULL)
    {

        for (int i = 0; i < array_size - 1; i++)
        {
            int menor_indice = i;
            for (int j = i + 1; j < array_size; j++)
            {
                if (array_original[j] < array_original[menor_indice])
                {
                    menor_indice = j;
                }

                int temp = array_original[i];
                array_original[i] = array_original[menor_indice];
                array_original[menor_indice] = temp;
            }
        }

        printf("Array ordenado: \n");
        for (int i = 0; i < array_size; i++)
        {
            printf("%d ", array_original[i]);
        }

        return 0;
    }
    else
    {
        printf("Pilha vazia!\n");
    }
}