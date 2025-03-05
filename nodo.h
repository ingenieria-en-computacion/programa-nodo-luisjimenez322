#ifndef _NODO_H_
#define _NODO_H_
#include <stdbool.h>

typedef struct Nodo 
{
    int dato;
    struct Nodo* siguiente;
} NODO;

NODO* CrearNodo(int dato);
bool BorrarNodo(NODO* nodo);
void AsignarDato(NODO* nodo, int dato);
int ObtenerDato(NODO* nodo);
void AsignarReferencia(NODO* nodo, NODO* ref);
NODO* ObtenerReferencia(NODO* nodo);

#endif
