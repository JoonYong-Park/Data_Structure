#include <stdio.h>
#include "c9_stack.h"
#include <string.h>

// 후위연산 구현

int main_9()
{
	Postfix("a*b+c");
	Postfix("a*(b+c)*d");

	return 0;	

}