#include <stdio.h>
#include <stdlib.h>

//prototipo de la funcion en asm
extern struct Nodo* crearArbolB(struct Nodo* izq, struct Nodo* der, int val);

/*ab* crearArbolB(int valor){ //return pos memoria de un arbol
	
}

ab* crearArbol(int valor, ab* izq, ab* der){//return pos memoria de un arb
	
}*/

struct nodo{
   int dato;
   struct nodo *izq;
   struct nodo *der;
};

struct nodo *newNodo(int dato){
   size_t tamNodo = sizeof(struct nodo);
   struct nodo *nodo = (struct nodo *) malloc(tamNodo); //aloja memoria para el nuevo nodo con el tamaño obtenido
   nodo->dato = dato;
   nodo->izq = nodo->der = NULL;
   return nodo;
}

int main(){
	struct nodo* nodoIzq = (struct nodo*)malloc(sizeof(struct nodo));
	struct nodo* nodoDer = (struct nodo*)malloc(sizeof(struct nodo));
	struct nodo* rizq = crearArbolB(nodoIzq, nodoDer, 5); //llamada a la funcion en asm
	struct nodo* rder = crearArbolB(nodoIzq, nodoDer, 7);//llamada a la funcion en asm
	struct nodo* raiz = crearArbolB(rizq, rder, 10); //llamada a la funcion en asm
	
	printf("Valor del nodo: %d\n", raiz->dato);
	printf("Valor del nodo izquierdo: %d\n", raiz->izq->dato); //accediendo al valor del nodo izquierdo de la raiz del arbol binario
	printf("Valor del nodo derecho: %d\n", raiz->der->dato);
	
	free(nodoIzq);
	free(nodoDer);
	free(raiz);
	return 0;
}











