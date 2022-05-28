#include <stdio.h>

int main()
{
	printf("hello world\n");
}

/*
CORRECTOIN: 

#include <stdio.h>

int main(void)                      // Par convention quand une fonction na pas de paramettre, on ecrit void.
{
	printf("hello world\n");
	return (0);                // A la fin d'un main ne jammais oublier return (0); cela permet d'inquer que ton programme c'est terminer correctement.
}
*/


