#include "c1.h"

// ����(main) ����
// 2���� �߻� �ڷ���
// ����� ������ �Է¹޾� ����ϴ� ���α׷�
// C��� ����

int main_() {
	struct USER A;

	setUser(&A, "���ؿ�", "����", "26", "010-2024-0315");
	getUser(&A);
	return 0;
}