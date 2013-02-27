#ifndef PARSETREE_H
#define PARSETREE_H

enum Tag {
	NUM,
	ADD
};

struct ParseTree {
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
};

#endif