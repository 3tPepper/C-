//문제4. 판매원들의 급여 계산 프로그램
//모든 판매원에게 매달 50만원의 기본 급여와 물품 판매 가격의 12%에 해당하는 돈을 지급.

#include <iostream>

int main(void) {
	int basic = 50;
	int sell;
	double result;
	while (1) {
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> sell;
		if (sell == -1) {
			std::cout << "프로그램을 종료합니다.";
			break;
		}
		else {
			result = basic + (sell * 0.12);
			std::cout << "이번 달 급여: " << result << "만원" << std::endl;
		}
	}

	return 0;
}