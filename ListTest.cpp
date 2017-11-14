#include "List.h"

int main(){
  List l;
  int v;
  std::cout << "Ingrese valores" << '\n';
  while (std::cin>>v) AgregarOrdenado(l,v);
  ImprimirLista(l);
}
