//문제1. 사용자로부터 총 5개의 정수를 입력 받아서, 그 합을 출력하는 프로그램을 작성해보자.

#include <iostream>

int main(void)
{
	int num[5];
	int result = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << i+1 << "번째 정수 입력: ";
		std::cin >> num[i];
		result += num[i];
	}

	std::cout << "합계: " << result;

	return 0;
}