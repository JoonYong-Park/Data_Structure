#include "c2.h"

// 2주차 추상 자료형
// c++ 버전

int main()
{
	USER J;

	J.setUser(&J, "박준용", "남자", "26", "010-2024-0315");
	J.getUser();

	return 0;
}