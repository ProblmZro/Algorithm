#include <stdio.h>
#include "stackv3.h"

void main()
{
	int i;
	init_stack();
	for (i = 1; i < 10; i++)
		push(i);
	print_stack("���� push 9ȸ");
	printf("\tpop() --> %d\n", pop());
	printf("\tpop() --> %d\n", pop());
	printf("\tpop() --> %d\n", pop());
	print_stack("���� pop 3ȸ");
}

