//Estudiante Anthonny Artavia Alpizar C10735
#include <stdio.h>

// Esta es la función para encontrar el valor mínimo en el arreglo
int encontrarMinimo(int arreglo[], int longitud) {
    int minimo = arreglo[0];
    for (int i = 1; i < longitud; ++i) {
        if (arreglo[i] < minimo) {
            minimo = arreglo[i];
        }
    }
    return minimo;
}
// Esta es la función para encontrar el valor máximo en el arreglo
int encontrarMaximo(int arreglo[], int longitud) {
    int maximo = arreglo[0];
    for (int i = 1; i < longitud; ++i) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }
    return maximo;
}
// Esta es la función para encontrar el valor mínimo y máximo utilizando punteros
void encontrarMinMax(int *arreglo, int *minimo, int *maximo, int longitud) {
    *minimo = arreglo[0];
    *maximo = arreglo[0];
    for (int i = 1; i < longitud; ++i) {
        if (arreglo[i] < *minimo) {
            *minimo = arreglo[i];
        }
        if (arreglo[i] > *maximo) {
            *maximo = arreglo[i];
        }
    }
}

int main() {
    int arreglo[] = {21, 24, 65, 3, 56, 12, 35, 15};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    // Con esto encontranos el mínimo y máximo usando funciones separadas
    int minimo = encontrarMinimo(arreglo, longitud);
    int maximo = encontrarMaximo(arreglo, longitud);
    printf("El mínimo encontrado es: %d\n", minimo);
    printf("El máximo encontrado es: %d\n", maximo);

    // Encontrar mínimo y máximo utilizando punteros
    int min, max;
    encontrarMinMax(arreglo, &min, &max, longitud);
    printf("El numero mínimo encontrado mediante punteros es: %d\n", min);
    printf("El numero máximo encontrado mediante punteros es: %d\n", max);

    return 0;
}
