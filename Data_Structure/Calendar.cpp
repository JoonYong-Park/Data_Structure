#include <iostream>
using namespace std;

/// ���� �Ҵ� 2���� �迭�� �޷� ��� ///
int main() {
    // 2���� �迭 ���� �Ҵ�
    int height = 6, width = 7;
    int** arr;
    int day = 1;

    arr = (int**)malloc(sizeof(int*) * height);
    for (int i = 0; i < height; i++) {
        arr[i] = (int*)malloc(sizeof(int) * width);
    }

    // 1���� �ݿ����� �ǵ��� ���� ���
    int startDay = 5;

    // 2���� �迭�� �� ����
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 && j < startDay) {
                arr[i][j] = 0;
            }
            else if (day <= 31) {
                arr[i][j] = day++;
            }
            else {
                arr[i][j] = 0;
            }
        }
    }

    // �޷� ���
    printf(" �� �� ȭ �� �� �� ��\n");
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (arr[i][j] != 0) {
                std::cout.width(3); // 3ĭ �ʺ�� ����
                std::cout << arr[i][j];
            }
            else {
                std::cout << "   ";
            }
        }
        std::cout << std::endl;
    }

    // 2���� �迭 �޸� ����
    for (int i = 0; i < height; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
