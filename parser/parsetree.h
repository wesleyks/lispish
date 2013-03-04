#ifndef PARSETREE_H
#define PARSETREE_H

typedef enum {
	NUM,
	ADD
} Tag;

typedef struct {
	Tag tag;
	union {
		struct {
			int value;
		} num;
		struct {
			struct ParseTree* left;
			struct ParseTree* right;
		} add;
	};
} ParseTree;

#endif