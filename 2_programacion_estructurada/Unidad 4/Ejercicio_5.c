#include <stdio.h>
#include <stdbool.h>

bool compararFrutas()
{
}

int main()
{
    char arregloFrutas[10][15];
    char fruta[15];
    bool resultado;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingresa la fruta %d: ", i);
        scanf("%s", &arregloFrutas[i]);
    }

    printf("Ingresa el nombre de una fruta: ");
    scanf("%s", &fruta);

    if (resultado == true)
    {
        printf("La fruta se encuentra en la lista");
    }
    else
    {
        printf("La fruta no se encuentra en la lista");
    }
}