#include <stdio.h>
#include <stdlib.h> //Librería para malloc y free
#include "nodo.h" //Agrega lo que está declarado en .h

NODO* CrearNodo(int dato)
{
    NODO* nuevo = (NODO*)malloc(sizeof(NODO)); //Reserva memoria para un nuevo nodo
    if (nuevo == NULL) //Verifica si la memoria fue asignada correctamente
    {
        return NULL; //Retorna NULL si no se pudo asignar memoria
    }
    nuevo->siguiente = NULL; // Inicializa el apuntador siguiente como NULL
    nuevo->dato = dato; // Asigna el dato recibido
    return nuevo; // Retorna el apuntador al nuevo nodo
}

bool BorrarNodo(NODO* n)
{
    if(n != NULL && n->siguiente == NULL) //Verifica si el nodo no es NULL
    {
        free(n); //Libera la memoria del nodo
        return true; //Retorna true indicando que el nodo fue eliminado
    }
    return false; //Retorna false si no se pudo eliminar
}

void AsignarDato(NODO* n, int d)
{
    if(n != NULL) //Verifica que el nodo no sea NULL
    {
        n->dato = d; //Asigna el nuevo dato
    }
}

int ObtenerDato(NODO* n)
{
    if(n == NULL) //Verifica si el nodo es NULL
    {
        printf("No hay datos\n");
        return -1; //Retorna -1=error
    }
    return n->dato; //Regresa el dato del nodo
}

void AsignarReferencia(NODO* n, NODO* e)
{
    if(n != NULL) //Verifica que el nodo no sea NULL
    {
        n->siguiente = e; //Asigna la referencia al nodo siguiente
    }
}

NODO* ObtenerReferencia(NODO* n)
{
    if(n != NULL) //Verifica que el nodo no sea NULL
    {
        return n->siguiente; //Retorna el nodo siguiente
    }
    return NULL; //Retorna NULL si el nodo es NULL
}
