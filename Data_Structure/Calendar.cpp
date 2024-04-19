#include <iostream>
using namespace std;

/// 동적 할당 2차원 배열로 달력 출력 ///
int main() {
    // 2차원 배열 동적 할당
    int height = 6, width = 7;
    int** arr;
    int day = 1;

    arr = (int**)malloc(sizeof(int*) * height);
    for (int i = 0; i < height; i++) {
        arr[i] = (int*)malloc(sizeof(int) * width);
    }

    // 1일이 금요일이 되도록 요일 계산
    int startDay = 5;

    // 2차원 배열에 값 저장
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

    // 달력 출력
    printf(" 일 월 화 수 목 금 토\n");
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (arr[i][j] != 0) {
                std::cout.width(3); // 3칸 너비로 정렬
                std::cout << arr[i][j];
            }
            else {
                std::cout << "   ";
            }
        }
        std::cout << std::endl;
    }

    // 2차원 배열 메모리 해제
    for (int i = 0; i < height; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
