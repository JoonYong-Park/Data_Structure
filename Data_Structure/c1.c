#include "c1.h"
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

// ����(implementation) ����

void printUser(struct USER* A) {
	printf("�̸�: %s\n", A->name);
	printf("����: %s\n", A->gender);
	printf("����: %s\n", A->age);
	printf("��ȭ��ȣ: %s\n", A->phone);
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