//프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서,
//입력 받은 데이터를 그대로 출력하는 프로그램

#include <iostream>

int main(void) {
	char name[10];
	char phone[20];

	std::cout << "이름을 입력하세요: ";
	std::cin >> name;
	std::cout << "전화번호를 입력하세요: ";
	std::cin >> phone;

	std::cout << "이름: " << name << ", 전화번호: " << phone;

	return 0;
}