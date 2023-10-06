#include <stdio.h>

// Función de búsqueda lineal
int busquedaLineal(int arreglo[], int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (arreglo[i] == valor) {
            return i; // Valor encontrado, retorna la posición en el arreglo
        }
    }
    return -1; // Valor no encontrado, retorna -1
}

// Función de búsqueda binaria iterativa
int busquedaBinariaIterativa(int arreglo[], int n, int valor) {
    int inicio = 0;
    int fin = n - 1;
    while (inicio <= fin) {
        int medio = (inicio + fin) / 2;
        if (arreglo[medio] == valor) {
            return medio; // Valor encontrado, retorna la posición en el arreglo
        } else if (arreglo[medio] < valor) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return -1; // Valor no encontrado, retorna -1
}

// Función de búsqueda binaria recursiva
int busquedaBinariaRecursiva(int arreglo[], int inicio, int fin, int valor) {
    if (inicio <= fin) {
        int medio = (inicio + fin) / 2;
        if (arreglo[medio] == valor) {
            return medio; // Valor encontrado, retorna la posición en el arreglo
        } else if (arreglo[medio] < valor) {
            return busquedaBinariaRecursiva(arreglo, medio + 1, fin, valor);
        } else {
            return busquedaBinariaRecursiva(arreglo, inicio, medio - 1, valor);
        }
    }
    return -1; // Valor no encontrado, retorna -1
}

int main() {
    int arreglo[] = {2, 4, 6, 23, 56, 79};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    int valor;
    printf("Ingrese un valor entero: ");
    scanf("%d", &valor);

    // Búsqueda lineal
    int resultadoLineal = busquedaLineal(arreglo, n, valor);
    if (resultadoLineal != -1) {
        printf("Busqueda Lineal: El valor %d fue encontrado en la posicion %d.\n", valor, resultadoLineal);
    } else {
        printf("Busqueda Lineal: Error, el valor %d no fue encontrado en el arreglo.\n", valor);
    }

    // Búsqueda binaria iterativa
    int resultadoBinariaIterativa = busquedaBinariaIterativa(arreglo, n, valor);
    if (resultadoBinariaIterativa != -1) {
        printf("Busqueda Binaria Iterativa: El valor %d fue encontrado en la posicion %d.\n", valor, resultadoBinariaIterativa);
    } else {
        printf("Busqueda Binaria Iterativa: Error, el valor %d no fue encontrado en el arreglo.\n", valor);
    }

    // Búsqueda binaria recursiva
    int resultadoBinariaRecursiva = busquedaBinariaRecursiva(arreglo, 0, n - 1, valor);
    if (resultadoBinariaRecursiva != -1) {
        printf("Busqueda Binaria Recursiva: El valor %d fue encontrado en la posicion %d.\n", valor, resultadoBinariaRecursiva);
    } else {
        printf("Busqueda Binaria Recursiva: Error, el valor %d no fue encontrado en el arreglo.\n", valor);
    }

    return 0;
}
