#include <stdio.h>

//extern free
//extern malloc

extern struct Nodo* crearArbolB(struct Nodo* izq, struct Nodo* der, int val);

//call malloc
//call free

ab* crearArbolB(int valor){ //return pos memoria de un arbol
	
}

ab* crearArbol(int valor, ab* izq, ab* der){//return pos memoria de un arb
	
}

void printArbolBinario(ab)

struct nodo{
   int dato;
   struct nodo *izq;
   struct nodo *der;
}

struct nodo *newNodo(int dato){
   size_t tamNodo = sizeof(struct nodo);
   struct nodo *nodo = (struct nodo *) malloc(tamNodo); //aloja memoria para el nuevo nodo con el tamaño obtenido
   nodo->dato = dato;
   nodo->izq = nodo->der = null;
   return nodo;
}

int main(){
	struct Nodo* nodoIzq = (struct Nodo*)malloc(sizeof(struct Nodo));
	struct Nodo* nodoDer = (struct Nodo*)malloc(sizeof(struct Nodo));
	struct Nodo* rizq = crearArbolB(nodoIzq, nodoDer, 5);
	struct Nodo* rder = crearArbolB(nodoIzq, nodoDer, 7);
	struct Nodo* raiz = crearArbolB(rizq, rder, 10);
	
	printf("Valor del nodo: %d\n", raiz->valor);
	printf("Valor del nodo izquierdo: %d\n", raiz->izquierdo->valor); //accediendo al valor del nodo izquierdo de la raiz del arbol binario
	printf("Valor del nodo derecho: %d\n", raiz->derecho->valor);
	
	free(nodoIzq);
	free(nodoDer);
	free(raiz);
	
}










