#include <stdio.h>
#include "c9_stack.h"
#include <string.h>

// �������� ����

int main_9()
{
	Postfix("a*b+c");
	Postfix("a*(b+c)*d");

	return 0;	

}