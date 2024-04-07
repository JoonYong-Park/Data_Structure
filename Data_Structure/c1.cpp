#include "c1.h"
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

// 구현(implementation) 파일

void printUser(struct USER* A) {
	printf("이름: %s\n", A->name);
	printf("성별: %s\n", A->gender);
	printf("나이: %s\n", A->age);
	printf("전화번호: %s\n", A->phone);
}

void setUser(struct USER* A, const char name[50], const char gender[50], const char age[50], const char phone[50]) {
	strcpy_s(A->name, 50, gender);
	strcpy_s(A->gender, 50, gender);
	strcpy_s(A->age, 50, age);
	strcpy_s(A->phone, 50, phone);
}

void getUser(struct USER* A) {
	printUser(A);
}