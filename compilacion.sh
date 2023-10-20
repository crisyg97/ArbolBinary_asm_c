nasm -f elf32 arbolBinario.asm -o abObjAsm.o
gcc -m32 -o abEjecutable abObjAsm.o arbolBinario.c
./abEjecutable
