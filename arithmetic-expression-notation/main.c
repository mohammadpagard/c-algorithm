#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "expression_notation.h"

int main() {
	char ex[] = "a+b/(c*d+e)-f^g";
	infixToPostfix(ex);

	return 0;
}
