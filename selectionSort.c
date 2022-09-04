#include <stdio.h>
#include <string.h>

void selectionSort(char string[], int tamanho)
{
    int i, j;
    char aux;

    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = i + 1; j < tamanho; j++)
        {
            if (string[i] > string[j])
            {
                aux = string[j];
                string[j] = string[i];
                string[i] = aux;
            }
        }
    }
}

int main()
{
    char string[10] = "adcbe";

    selectionSort(string, strlen(string));
    printf("%s\n", string);
    return 0;
}