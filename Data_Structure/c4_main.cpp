#include <stdio.h>
#include <string.h> 
#include <iostream> 
#include <string.h>
#include "c4.h"

#define _CRT_SECURE_NO_WARNINGS 
using namespace std;

// 4���� - ��� ȣ�� + ����ü
// ��� ȣ�� : �Լ��� �ڱ� �ڽ��� ȣ���ϴ� ��
// ����ü : ���� �ٸ� �ڷ����� ��� �ϳ��� �ڷ������� ������ִ� ��

int main_4() {
	
	// ����ü	
	// �� ���� �Է� �� ���
	Customer C;
	C.InPersons();  // �� ���� �Է�
	C.OutPersons(); // �� ���� ���

	
	Person2 P;
	P.InPersons2();  // �� ���� �Է�
	P.OutPersons2(); // �� ���� ���

	return 0;
}