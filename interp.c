#include "interp.h"

int interpret(ParseTree* pt) {
	switch(pt->tag) {
		case NUM:
			return pt->num.value;
			break;
		case ADD:
			return interpret(pt->add.left) + interpret(pt->add.right);
			break;
	}
}