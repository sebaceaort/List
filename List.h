#include <iostream>

struct Nodo {
  int val;
  Nodo * next;
};

struct List{
  Nodo * elPrimero=nullptr;
};

void ImprimirLista (const List &);
bool EstaVacia (const List &);
void AgregarOrdenado (List &, int);
