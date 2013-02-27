#include "interp.h"
#include <stdio.h>
#include <stdlib.h>

int main () {
	ParseTree* pt = (ParseTree*)malloc(sizeof(ParseTree));
	pt->tag = NUM;
	pt->num.value = 5;
	int result = interpret(pt);
	printf("%i\n",result);
	return 0;
}