global crearArbolB
extern _malloc
extern _free

section .data
    izq dd 0
    der dd 0
    dato dd 0
    SizeofNodo equ 12

section .text

agregarNodo:
    

main:
    ;enter
    push ebp 	 ;guardo base point
    mov ebp, esp ;el nuevo base point es stack point

    //manejo de la pila
    mov ebx, [ebp + 8]  ;Obtener el puntero al nodo izquierdo
    mov ecx, [ebp + 12] ;Obtener el puntero al nodo derecho
    mov edx, [ebp + 16] ;Obtener el valor del nodo

    mov [eax], ebx      ;Asignar el puntero al nodo izquierdo
    mov [eax + 4], ecx  ;Asignar el puntero al nodo derecho
    mov [eax + 8], edx  ;Asignar el valor del nodo

    ;leave
    mov esp, ebp ;reinicio el ebp a la posicion de partida
    pop ebp ;restauro el viejo ebp
    ret