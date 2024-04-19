#include <stdio.h>
#include <malloc.h>
#include "c3.h"

// 3주차 - 포인터, 배열, 구조체
//

int main_3() {
	// 포인터의 필요성
	int a = 10, b = 20;

	// 값을 전달
	swap1(a, b);
	printf("a: %d, b: %d\n", a, b); // 10, 20

	// 주소값 전달
	swap2(&a, &b);
	printf("a: %d, b: %d\n", a, b); // 20, 10

	// 동적할당
	int *p =(int*)malloc(sizeof(int));
	*p = 1;
	*(p + 1) = 2;
	*(p + 2) = 3;
	*(p + 3) = 4;
	*(p + 4) = 5;

	printf("p = %d\n",*p); // 주소값
	printf("p + 1 = %d\n", *(p + 1)); // 2
	printf("p + 2 = %d\n", *(p + 2)); // 3
	printf("p + 3 = %d\n", *(p + 3)); // 4
	printf("p + 4 = %d\n", *(p + 4)); // 5


	swap3(p, p + 4);
	printf("a: %d, b: %d\n", *p, *(p+4)); // 5, 1

	return 0;

}


