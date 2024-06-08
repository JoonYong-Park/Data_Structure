#include <iostream>

// 피보나치 수를 재귀적으로 계산
// 각 피보나치 수를 구할 때 이전 두 피보나치 수의 합을 이용
// 시간 복잡도: O(2^n)

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
    std::cout << "입력: ";
    std::cin >> n;
    std::cout << "값: " << fibonacci(n) << std::endl;
    return 0;
}
