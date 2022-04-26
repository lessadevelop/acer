#include <stdio.h>
#include <stdlib.h>


int main()
{
	printf("Hello World \n\n\n\n ");
	return 0;
}


/*
---------------------------------------------------------- COMPILANDO

		# gcc hello.c -o hello


---------------------------------------------------------- ERRO DE COMPILACAO

		- gcc fatal error: stdio.h : no such file or directory



---------------------------------------------------------- sOLUÇÃO QUE ENCONTREI

		# sudo aptg-get install libc6-dev

*/
