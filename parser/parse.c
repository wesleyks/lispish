#include "parse.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/*
tokenize the string into a nested list thing, then parse the list
*/
ParseTree* parse(char* s) {
	char* s1;
	char* s2;
	int n1;
	ParseTree* pt = (ParseTree*)malloc(sizeof(ParseTree));
	if (sscanf(s,"%i",&n1)) {
		puts("#");
		pt->tag = NUM;
		pt->num.value = n1;
		return pt;
	} else if (sscanf(s,"(+ %s)",s1)) {
		puts("+");
		pt->tag = ADD;
		puts(s1);
		pt->add.left = parse(s1);
		puts(s2);
		pt->add.right = parse(s2);
		puts("success");
		return pt;
	}
	return NULL;
}