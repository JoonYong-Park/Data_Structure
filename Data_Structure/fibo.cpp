#include <iostream>

// �Ǻ���ġ ���� ��������� ���
// �� �Ǻ���ġ ���� ���� �� ���� �� �Ǻ���ġ ���� ���� �̿�
// �ð� ���⵵: O(2^n)

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main_fibonacci() {
    int n;
    std::cout << "�Է�: ";
    std::cin >> n;
    std::cout << "��: " << fibonacci(n) << std::endl;
    return 0;
}
