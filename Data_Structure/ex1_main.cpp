#include "ex1.h"

// ����(main) ����
// 2���� �ǽ� 1�� ����
// ����� ������ �Է¹޾� ����ϴ� ���α׷�
// C��� ����

int main() {
	struct USER A;

	setUser(&A, "���ؿ�", "����", "26", "010-2024-0315");
	getUser(&A);
	return 0;
}