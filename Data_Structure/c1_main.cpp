#include "c1.h"

// 메인(main) 파일
// 2주차 추상 자료형
// 사용자 정보를 입력받아 출력하는 프로그램
// C언어 버전

int main_() {
	struct USER A;

	setUser(&A, "박준용", "남자", "26", "010-2024-0315");
	getUser(&A);
	return 0;
}