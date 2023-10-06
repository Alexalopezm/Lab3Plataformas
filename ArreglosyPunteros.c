#include <stdio.h>

// Función para encontrar el valor mínimo en un arreglo
int encontrarMinimo(int arreglo[], int longitud) {
    int minimo = arreglo[0]; // Suponemos que el primer elemento es el mínimo

    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] < minimo) {
            minimo = arreglo[i];
        }
    }

    return minimo;
}

// Función para encontrar el valor máximo en un arreglo
int encontrarMaximo(int arreglo[], int longitud) {
    int maximo = arreglo[0]; // Suponemos que el primer elemento es el máximo

    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }

    return maximo;
}

// Función para encontrar el valor mínimo y máximo usando punteros
void encontrarMinMax(int *arreglo, int *minimo, int *maximo, int longitud) {
    *minimo = *maximo = arreglo[0]; // Inicializamos minimo y maximo con el primer elemento

    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] < *minimo) {
            *minimo = arreglo[i];
        }
        if (arreglo[i] > *maximo) {
            *maximo = arreglo[i];
        }
    }
    printf("Minimo (con punteros): %d\n", *minimo);
    printf("Maximo (con punteros): %d\n", *maximo);
}

int main() {
    int arreglo[] = {21, 24, 65, 3, 56, 12, 35, 15};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    int minimo, maximo;

    printf("El array es: %d, %d, %d, %d, %d, %d, %d, %d \n", arreglo[0],arreglo[1],arreglo[2],arreglo[3],arreglo[4],arreglo[5],arreglo[6],arreglo[7]);
    
    // Llamamos a la función para encontrar el mínimo
    minimo = encontrarMinimo(arreglo, longitud);

    // Llamamos a la función para encontrar el máximo
    maximo = encontrarMaximo(arreglo, longitud);

    // Llamamos a la función para encontrar el mínimo y máximo usando punteros
    encontrarMinMax(arreglo, &minimo, &maximo, longitud);

    printf("Minimo: %d\n", minimo);
    printf("Maximo: %d\n", maximo);

    return 0;
}
