#include "c3.h"


// call by value
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

// call by reference
void swap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// call by reference
void swap3(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}