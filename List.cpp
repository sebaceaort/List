#include "List.h"

bool EstaVacia(const List &l){
  return l.elPrimero== nullptr;
}

void ImprimirLista(const List& l){
  if (EstaVacia(l)) {
    std::cout<<"Lista vacia\n";
    return;
    }
  for(auto i=l.elPrimero; i; i=i->next)
    std::cout<<"Valor: "<< i->val<< '\n';
  }


void AgregarOrdenado (List & l, int valor){
  auto *n=new Nodo;
  n->val=valor;
  n->next=nullptr;
  Nodo *act,*ant=nullptr;
  if(EstaVacia(l)) {
		// in_pr_el1();
		l.elPrimero=n;
		return;
  }else{  //Si ya habia ingresado nodos...
      act = l.elPrimero;
      while((act != NULL) and act->val < valor){  //mientras
    //contenido no supere al valor del nodo actual.
          ant = act;
          act = act->next;     //apunto al siguiente nodo.
      }
      if(ant == NULL){                     //Si se mete al principio de la lista
         n->next = l.elPrimero;
         l.elPrimero = n;
      }
      else{                               //Si se mete en el medio de la lista.
          ant->next = n;
          n->next = act;
      }
      return;
  }
}
