//Estudiante Anthonny Artavia Alpizar C10735

#include <stdio.h>

// Búsqueda lineal
int busquedaLineal(int arreglo[], int tamano, int valor) {
    for (int i = 0; i < tamano; ++i) {
        if (arreglo[i] == valor) {
            return i;
        }
    }
    return -1; // Valor no encontrado
}

// Búsqueda binaria
int busquedaBinaria(int arreglo[], int izquierda, int derecha, int valor) {
    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        
        // El valor si está en el medio
        if (arreglo[medio] == valor) {
            return medio;
        }
    
        // Si el valor es mayor, buscar en la mitad derecha
        if (arreglo[medio] < valor) {
            izquierda = medio + 1;
        }
        // Si el valor es menor, buscar en la mitad izquierda
        else {
            derecha = medio - 1;
        }
    }
    return -1; // Valor no encontrado
}

// Búsqueda binaria recursiva
int busquedaBinariaRecursiva(int arreglo[], int izquierda, int derecha, int valor) {
    if (derecha >= izquierda) {
        int medio = izquierda + (derecha - izquierda) / 2;
        
        // Si el valor está en el medio
        if (arreglo[medio] == valor) {
            return medio;
        }
        
        // Si el valor es mayor, buscar en la mitad derecha
        if (arreglo[medio] < valor) {
            return busquedaBinariaRecursiva(arreglo, medio + 1, derecha, valor);
        }
        // Si el valor es menor, buscar en la mitad izquierda
        else {
            return busquedaBinariaRecursiva(arreglo, izquierda, medio - 1, valor);
        }
    }
    return -1; // Valor no encontrado
}

int main() {
    int arreglo[] = {2, 4, 6, 23, 56, 79};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    int valor;
    printf("Ingrese un valor entero: ");
    scanf("%d", &valor);

    int posicion = busquedaLineal(arreglo, tamano, valor);
    if (posicion != -1) {
        printf("La posición del valor %d encontrado mediante búsqueda lineal es: %d\n", valor, posicion);
    } else {
        printf("El valor %d no fue encontrado mediante búsqueda lineal.\n", valor);
    }

    posicion = busquedaBinaria(arreglo, 0, tamano - 1, valor);
    if (posicion != -1) {
        printf("La posición del valor %d encontrado mediante la búsqueda binaria es: %d\n", valor, posicion);
    } else {
        printf("El valor %d no fue encontrado mediante la búsqueda binaria.\n", valor);
    }

    posicion = busquedaBinariaRecursiva(arreglo, 0, tamano - 1, valor);
    if (posicion != -1) {
        printf("La posición del valor %d encontrado mediante la búsqueda binaria recursiva es: %d\n", valor, posicion);
    } else {
        printf("El valor %d no fue encontrado mediante la búsqueda binaria recursiva.\n", valor);
    }

    return 0;
}
