#include "interp.h"
#include "parse.h"
#include <stdio.h>
#include <stdlib.h>

int main () {
	char s[] = "(+ 1 2)";
	ParseTree* pt = parse(s);
	int result = interpret(pt);
	printf("%i\n",result);
	return 0;
}